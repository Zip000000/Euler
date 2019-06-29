/*************************************************************************
	> File Name: 253.HZ.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月29日 星期六 19时01分25秒
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
#define MAX 2500
struct Range{
    int x, y;
} r[MAX + 5];

int cnt[MAX + 5];

bool cmp(const Range &a, const Range &b) {
    if(a.y != b.y) return a.y < b.y;
    return a.x > b.x;
}

int main() {
    int C, L;
    cin >> C >> L;
    for(int i = 0; i < C; i++) {
        cin >> r[i].x >> r[i].y;
    }
    for(int i = 0; i < L; i++) {
        int a, b;
        cin >> a >> b;
        cnt[a] += b;
    }


    sort(r, r + C, cmp);

    int ans = 0;
    for(int i = 0; i < C; i++) {
        int flag = -1;
        for(int j = r[i].x; j <= r[i].y && flag == -1; j++) {
            if(cnt[j] == 0) continue;
            flag = j;
            break;
        }
        if(flag != -1) ans++, cnt[flag] -= 1;
    }
    printf("%d\n", ans);
    
    return 0;
}
