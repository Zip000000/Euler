/*************************************************************************
	> File Name: 5.EP_my.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 14时46分14秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    long long ans = 1;

    for(int i = 1; i <= 20; i++) {
        ans = ans * i / gcd(ans, i);
    }
    printf("%lld\n", ans);

    
    return 0;
}

