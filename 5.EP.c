/*************************************************************************
	> File Name: 5.EP.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月11日 星期二 20时03分46秒
 ************************************************************************/

#include<stdio.h>


long gcd(long a, long b) {
    return (b ? gcd(b, a%b) : a);
}

int main() {
    long ans = 1;
    for(int i = 2; i <= 20; i++) {
        ans = ans * i / gcd(ans, i);
    }
    printf("ans=%ld\n", ans);
    
    return 0;
}
