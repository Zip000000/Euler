/*************************************************************************
	> File Name: 2.xianxingshai.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 17时41分05秒
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
#define MAX_N 200000

int prime[MAX_N + 5];  //保存素数
int is_prime[MAX_N + 5];  //保存所有数的标记

int main() {

    for(int M = 2; M <= MAX_N; M++) {
        if(is_prime[M] == 0) {
            prime[0]++;
            prime[prime[0]] = M;
        }
        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * M > MAX_N) break;
            is_prime[M * prime[j]] += 1;
            if(M % prime[j] == 0) break;

        }

    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << prime[i * 30 + j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
