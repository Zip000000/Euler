/*************************************************************************
	> File Name: 12.EP_my2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 11时43分55秒
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
#define MAX 1000000
int prime[MAX + 5] = {0};
int is_prime[MAX + 5] = {0};

int main() {
    int f[MAX + 5] = {0};
    f[1] = 1;
    for(int M = 2; M * 2<= MAX; M++) {
        if(is_prime[M] == 0){
            prime[++prime[0]] = M;
            f[M] = 2;
        } 
        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            is_prime[M * prime[j]] = 1;
            if(M % prime[j] == 0) {
                int cnt = 1;
                int a = M;
                while(a % prime[j] == 0) {
                    a /= prime[j];
                    cnt++;
                }
                f[M * prime[j]] = f[a] * (cnt + 1);
            } else {
                f[M * prime[j]] = f[M] * f[prime[j]];

            }
        }

    }
/*
    long long n = 1;
    while (true) {
        int f_nums;
        if (n % 2) {
            f_nums = f[n] * f[(n + 1) / 2];
        } else {
            f_nums = f[n / 2] * f[n + 1];
        }
        if(f_nums > 500) break;
        n++;
    }
    printf("n = %lld\n", n);
    cout << n * (n + 1) / 2 <<endl;
*/

    for(long long n = 1; ; n++) {
        long long f_num;
        if(n % 2) {
            f_num = f[n] * f[(n + 1)/ 2];
        } else {
            f_num = f[n / 2] * f[n + 1];
        }
        if(f_num > 500) {
            printf("%lld\n", n * (n + 1) / 2);
            break;
        }
    }
    
    
    
    
    return 0;
}
