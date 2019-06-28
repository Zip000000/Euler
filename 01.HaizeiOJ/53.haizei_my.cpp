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
int is_prime[MAX + 5];
int prime[MAX + 5];
int dnum[MAX + 5];

int main() {
    for(int M = 2; M <= MAX; M++) {
        if(is_prime[M] == 0) prime[++prime[0]] = M;
        dnum[M] = M + 1;

        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * M > MAX) break;
            is_prime[prime[j] * M] = 1;
            
            if(M % prime[j] == 0) {
                int tmp_M = M;
                int tmp_pj = prime[j];
                while(tmp_M % prime[j] == 0) {
                    tmp_M = tmp_M / prime[j];
                    tmp_pj *= prime[j];
                }
                dnum[M * prime[j]] = dnum[tmp_M] * dnum[tmp_pj];
            } else {
                dnum[M * prime[j]] = dnum[M] * dnum[prime[j]];
            }
        }
    }
    int max = 0;
    for(int i = 0; i <= MAX; i++) {
        int temp = dnum[i];
        if(temp > max) max = temp;
    }
    printf("%d\n", max);
    
    
    return 0;
}
