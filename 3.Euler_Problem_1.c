/*************************************************************************
	> File Name: 3.Euler_Problem_1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月19日 星期日 19时04分52秒
 ************************************************************************/

#include<stdio.h>

#define N 600851475143LL


int main() {
    long long num = N, ans;
    int i = 2;
    
    while (i * i <= num) {
        if(num % i == 0) ans = i;
        while (num % i == 0) num /= i;
        i++;
    }
    if


    return 0;
}
