/*************************************************************************
	> File Name: 2.test.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月28日 星期五 14时40分05秒
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
    dnum[1] = 1;

    for(int M = 2; M <= MAX; M++) {
        if(is_prime[M] == 0) {
            prime[++prime[0]] = M;
            dnum[M] = M + 1;
        } 
        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            is_prime[M * prime[j]] = 1;
            if(M % prime[j] == 0) {
                int tmp_M = M;
                int tmp_pj = prime[j];
                int cnt = 1;
                while(tmp_M % prime[j] == 0) {
                    cnt++;
                    tmp_M = tmp_M / prime[j];
                    tmp_pj *= prime[j];
                    //printf("tmp = %d pj = %d\n", tmp_M, tmp_pj);
                }
                dnum[M * prime[j]] = dnum[tmp_M] * dnum[tmp_pj];
                if(tmp_M == 1) dnum[M * prime[j]] = ((int)pow(prime[j], cnt + 1) - 1) / (prime[j] - 1);
                printf("dnum[%d] = d[%d] : %d   * d[%d] : %d = %d\n", M*prime[j],tmp_M, dnum[tmp_M], tmp_pj, dnum[tmp_pj], dnum[M * prime[j]]);
            } else {
                dnum[M * prime[j]] = dnum[M] * dnum[prime[j]];
            }
        }
    }
        


   int max = 0;
    int who = 0;
    for(int i = 0; i < MAX; i++) {
        int temp = dnum[i];
        //printf("%d : %d\n", i, dnum[i]);
        if(temp > max) max = temp, who = i;
    }
    printf("max = %d  who = %d \n", max, who);
    printf("dnum[999999] = %d\n", dnum[999999]);
    
    
    
    

    return 0;
}
