/*************************************************************************
	> File Name: 46.EP_my2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 13时14分35秒
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

bool is_val(int n) {
    for(int i = 1; 2 * i * i <= n; i++) {
        if(is_prime[n - 2 * i * i] == 0) return true;
    }
    return false;
}

int main() {
    is_prime[0] = is_prime[1] = 1;
        
    for(int i = 2; i <= MAX; i++) {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > MAX) break;
            is_prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    

    for(int i = 9;;i+=2) {
        if(!is_prime[i]) continue;
        if(is_val(i)) continue;
        printf("%d\n", i);
        break;
    }
    
    
    
    return 0;
}
