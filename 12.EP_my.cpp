/*************************************************************************
	> File Name: 12.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 19时00分39秒
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
    int f[MAX + 5];
    f[1] = 1;
    for(int M = 2; M * 2 <= MAX; M++) {
        if(!is_prime[M]) {
            prime[++prime[0]] = M;
            f[M] = 2;
        }
        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            is_prime[prime[j] * M] = 1;
            if(M % prime[j] == 0) {
                int cnt = 0;
                int tmp_m = M;
                while(tmp_m % prime[j] == 0) tmp_m /= prime[j], cnt++;
                f[M * prime[j]] = f[tmp_m] * (cnt + 2);
                break;
            } else {
                f[prime[j] * M] = f[prime[j]] * f[M];
            }
            
        }
    }
    int sum = 0;
    for(int i =2; i <= 10000; i++) {
        printf("f[%d] = %d\n", i, f[i]);
        sum += f[i];
    }
    printf("sum = %d\n",sum);

    //int tri = 1;
    //int i = 1;
    //while(f[tri] < 500) {
    //    i++;
    //    tri += i;
    //}
    //printf("%d\n", tri);

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

    


    return 0;
}

    

