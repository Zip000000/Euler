/*************************************************************************
	> File Name: 255.HZ.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月29日 星期六 19时56分59秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define MAX 1000
struct Range {
    double l, r;
} r[MAX + 5];

bool cmp(const Range &a, const Range &b) {
    if(a.r != b.r) return a.r < b.r;
    return a.l > b.l;
}

int main() {
    int n;
    double d;
    cin >> n >> d;
    int flag = 0;
    for(int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        if(y > d) flag = 1;
        r[i].l = x - sqrt(d * d - y * y);
        r[i].r = x + sqrt(d * d - y * y);
    }
    if(flag == 1) {
        cout << -1 <<endl;
        return 0;
    }
    
    sort(r, r + n, cmp);
    double p = r[0].l-1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(r[i].l > p) {
            p = r[i].r;
            ans++;
        }
    }

    cout << ans <<endl;
    return 0;

    
}
