/*************************************************************************
	> File Name: 35.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 21时47分46秒
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

int prime[MAX + 5];
int is_prime[MAX + 5];

void makeprime() {
    is_prime[1] = 1;
    for(int M = 2; M * 2 <= MAX; M++) {
        if(!is_prime[M]) prime[++prime[0]] = M;
        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            is_prime[prime[j] * M] = 1;
            if(M % prime[j] == 0) break;
        }
    }
}

int digits(int n) {
    return floor(log10(n)) + 1;
}

int getrole(int n, int dig) {
    int temp = n % 10;
    n /= 10;
    n = n + temp * pow(10, dig - 1);
    return n;

}

int is_ans(int n) {
    int dig = digits(n);
    int temp = n;
    for(int i = 0; i < dig; i++) {
        if(is_prime[temp]) return 0;
        temp = getrole(temp, dig);
    }
    return n;

}

int main() {
    makeprime();
    int cnt = 0;
    for (int i = 2; i < MAX; i++) {
        if(is_ans(i)) cnt++;
    }

    printf("cnt = %d\n", cnt);



}
