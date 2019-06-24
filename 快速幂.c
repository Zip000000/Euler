/*************************************************************************
	> File Name: 快速幂.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 16时25分53秒
 ************************************************************************/

#include<stdio.h>

long long ksm(long long a long long b) {
    int ans = 1, base = a;
    while(b != 0) {
        if(b & 1) {
            ans *= base;
        }
        b >>= 1;
        base *= base;
    }
}

int main() {
    

    return 0;
}
