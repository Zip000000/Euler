/*************************************************************************
	> File Name: haizei54.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月25日 星期二 19时51分53秒
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
#define MAX 5000

int num[MAX];
int ans[MAX];

void getans(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= num[0]; j++) {
            num[j] *= i;
        }
        for(int j = 1; j <= num[0]; j++) {
            if(num[j] < 10) continue;
            num[j + 1] += num[j] / 10;
            num[j] = num[j] % 10;
            num[0] += (j == num[0]);
        }
    }

    for(int i = 1; i <= num[0]; i++) {
        if(num[i] == 0) continue;

        for(int j = 1; j <= ans[0]; j++) {
            ans[j] *= num[i];
        }
        for(int j = 1; j <= ans[0]; j++) {
            if(ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] = ans[j] % 10;
            ans[0] += (j == ans[0]);
        }
    }
    
    for(int i = ans[0]; i >= 1; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
}


int main() {
    int x;
    while(scanf("%d", &x) != EOF) {
        memset(num, 0, sizeof(num));
        memset(ans, 0, sizeof(ans));
        num[0] = num[1] = 1;
        ans[0] = ans[1] = 1;
        getans(x);
    }
    return 0;
}
