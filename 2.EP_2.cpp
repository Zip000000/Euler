/*************************************************************************
	> File Name: 2.Euler_Problem_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月19日 星期日 18时29分23秒
 ************************************************************************/


#include <stdio.h>
#define MAX_N 44
#define MAX_M 4000000

int fib[MAX_N + 5];

int main() {
    int n = 2;
    fib[1] = 1; fib[2] = 2;
    int temp = 0;
    while((temp = fib[n] + fib[n - 1]) < MAX_M) {
        fib[n + 1] = temp;
        n++;
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if(fib[i] % 2) continue;
        sum += fib[i];
    }
    printf("n = %d %lld\n", n, sum);
    return 0;
}

