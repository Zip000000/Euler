/*************************************************************************
	> File Name: 37.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 21时12分39秒
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
int prime[MAX];
int is_prime[MAX] = {0};

void makeprime() {
    is_prime[1] = 1;
    for(int M = 2; M  <= MAX; M++) {
        if(!is_prime[M]) prime[++prime[0]] = M;

        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            is_prime[M * prime[j]] = 1;
            if(M % prime[j] == 0) break;
        }
    }
}

long long digits(long long n) {
    return floor(log10(n)) + 1;
}

long long is_ans(long long n) {
    if(is_prime[n] == 1) return 0;
    long long dig = digits(n);
    for(long long i = 1; i < dig; i++) {
        int ind1 = n % (long long)pow(10, dig - i);
        int ind2 = n / pow(10, i);
        if(is_prime[ind1] == 1) return 0;
        if(is_prime[ind2] == 1) return 0;
    }
    return 1;
        
    
}

int main() {

    makeprime();
    
    long long num = 10;
    long long sum = 0;
    int cnt = 0;
    while(cnt < 11 && num <= MAX) {
        num++;
        if(!is_ans(num)) continue;
        cnt++;
        sum += num;
        printf("riight num = %lld\n", num);
    }
    printf("cnt = %d\n", cnt);
    printf("%lld\n", sum);

    
    
    
    return 0;
}
