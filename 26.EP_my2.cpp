/*************************************************************************
	> File Name: 26.EP_my2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 15时35分41秒
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

int cnt[MAX  + 5] = {0};

int get_num(int n) {
    int r = 1;
    int id = 1;
    memset(cnt, 0 ,sizeof(cnt));
    cnt[1] = 1;
    while(r != 0) {
        r *= 10;
        r %= n;
        id++;
        if(cnt[r] != 0) return (id - cnt[r]);
        cnt[r] = id;
    }
    return 0;
}

int main() {
    int max = 0, ans;
    for(int i = 1; i < MAX; i++) {
        int temp = get_num(i);
        if (temp > max) max = temp, ans = i;
    }
    cout << ans <<endl;
    


    return 0;
}
