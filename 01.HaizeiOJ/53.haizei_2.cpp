/*************************************************************************
	> File Name: 53.haiezei_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月27日 星期四 19时13分33秒
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
int dnum[MAX + 5];
int mnum[MAX + 5];

int main() {
    dnum[1] = 1;
    for(int i = 2; i <= MAX; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = i + 1;
            mnum[i] = i;
        }

        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i > MAX) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j]) {
                dnum[i * prime[j]] = dnum[i]  * dnum[prime[j]];
                mnum[i * prime[j]] = prime[j];
            } else {
                mnum[i * prime[j]] = mnum[i] *prime[j];
                int min_prime = mnum[i * prime[j]], rest = i * prime[j] / min_prime;
                dnum[i * prime[j]] = dnum[min_prime] * dnum[rest];
                if(rest == 1) dnum[i * prime[j]] = (min_prime * prime[j] - 1) / (prime[j] - 1);
            } 
        }
    }
    int ans = 0;
    for(int i = 0; i <= MAX; i++) {
        int temp = dnum[i];
        if(temp > ans) ans = temp;
    }
    printf("%d\n", ans);
    return 0;
}
