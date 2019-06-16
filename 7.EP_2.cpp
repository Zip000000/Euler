/*************************************************************************
	> File Name: 7.EP_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 09时24分52秒
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
#define MAX_N  200000

int is_prime[MAX_N +5];

int main() {
    
    for(int i = 2; i * i< MAX_N; i++){
        if(is_prime[i] != 0) continue;
        for(int j = 2; j * i <= MAX_N; j++) {
            is_prime[i*j] = 1;
        }
    }

    for (int i = 2; i < MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001];
    
    return 0;
}
