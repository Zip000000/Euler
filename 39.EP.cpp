/*************************************************************************
	> File Name: 39.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月29日 星期六 14时44分31秒
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


int cnt[MAX + 5];

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int  main() {
    for(int n = 1; n <= 32; n++) {
        for(int m = n + 1; m <= 32; m++) {
            if(gcd(n, m) != 1) continue;
            int a = m * m - n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;
            for(int p = a + b + c; p <= MAX; p += (a + b + c)) {
                cnt[p] += 1;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= MAX; i++) {
        if(cnt[i] > cnt[ans]) ans = i;
    }

    printf("%d\n", ans);
        
    return 0;
}
