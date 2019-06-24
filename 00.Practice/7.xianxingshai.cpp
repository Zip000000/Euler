/*************************************************************************
	> File Name: 7.xianxingshai.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 21时44分03秒
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
#define MAX 200000
int prime[MAX + 5];
int is_prime[MAX + 5];


int main() {
    
    for(int M = 2; M <= MAX; M++) {
        if(is_prime[M] == 0) prime[++prime[0]] = M;

        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * M > MAX) break;
            is_prime[prime[j] * M] = 1;
            if(M % prime[j] == 0) break;
        }
    }

    cout << prime[10001] << endl;
    
    for(int i = 0; i < 10000; i++) {
        for(int j = 0; j < 20; j++) {
            printf("%d ", is_prime[i * 20 + j]);
        }
        printf("\n");
    }
    
    return 0;
}
