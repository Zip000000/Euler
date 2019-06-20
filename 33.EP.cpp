/*************************************************************************
	> File Name: 33.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 13时03分24秒
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

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int is_same(int up1, int down1, int up2, int down2) {
    return up1 * down2 == up2 * down1;
}

int is_ans(int up, int down) {
    if(up % 10 == 0) return 0;
    int up_part[] = {up / 10, up % 10};
    int down_part[] = {down / 10, down % 10};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            if(up_part[i] != down_part[j]) continue;
            if(is_same(up, down, up_part[(i + 1) % 2], down_part[(j + 1) % 2])) return 1;
        }
    }
    return 0;
}

int simple(int *up, int *down) {
    while(gcd(*up, *down) != 1) {
        int gcd_up_down = gcd(*up, *down);
        printf("gcd = %d\n", gcd_up_down);
        *up /= gcd_up_down;
        *down /= gcd_up_down;
    }
}

int main() {
    long long ans_up = 1, ans_down = 1;
    for(int i = 10; i < 100; i++) {
        for(int j = i + 1; j < 100; j++) {
            if(is_ans(i, j)) ans_up *= (long long)i, ans_down *= (long long)j;
            if(is_ans(i, j)) printf(" %d / %d  : %d\n", i, j, is_ans(i, j));
        }
    }
    //simple(&ans_up, &ans_down);
    printf("%lld / %lld \n", ans_up, ans_down);
    
    return 0;
}
