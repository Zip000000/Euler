/*************************************************************************
	> File Name: 20.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月21日 星期五 15时14分36秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define MAX 500
using namespace std;

void arrxb(int a[], int b) {
    for(int i = 1; i <= a[0]; i++) {
        a[i] *= b;
    }
    int cnt = 1;
    while(cnt <= a[0] || a[cnt] != 0) {
        a[cnt + 1] += a[cnt] / 10;
        a[cnt] %= 10;
        cnt++;
    }
    a[0] = cnt-1;
}

int print(int a[]) {
    for(int i = 0; i < a[0] + 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 1;
}

int main() {
    int ans[MAX] = {0};
    ans[0] = ans[1] = 1;
    
    for(int i = 2; i <= 100; i++) {
        arrxb(ans, i);
        i>=20 || print(ans);
    }
    int sum = 0;
    for(int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
    }
    printf("%d\n", sum);
    
    
    return 0;
}
