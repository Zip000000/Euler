/*************************************************************************
	> File Name: 47.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月29日 星期六 16时09分40秒
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

int main() {
    for(int i = 2; i <= MAX; i++) {
        if(prime[i]) continue;
        for(int j = i; j <= MAX; j += i) {
            prime[j] += 1;
        }
    }
    
    for(int i = 1; i <= MAX; i++) {
        int flag = 1;
        for(int j = 0; j < 4 && flag; j++) {
            flag = (prime[i + j] == 4);
        }
        if(flag) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
