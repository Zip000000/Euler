/*************************************************************************
	> File Name: 47.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 11时07分29秒
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

int main() {
    for(int i = 2; i <= MAX; i++) {
        if(is_prime[i]) continue;
        for(int j = 1; j * i <= MAX; j++) {
            is_prime[i * j] += 1;
        }
    }

    for(int i = 1; i <= MAX ; i++) {
        int flag = 1;
        for(int j = 0; j < 4; j++) {
            if(is_prime[i + j] != 4) {
                flag = 0;
                break;
            }
            //printf("%d\n", i);
        }
        if(flag == 1) {
            printf("%d\n", i);
            return 0;
        }
    }

    
    
    
    return 0;
}
