/*************************************************************************
	> File Name: 46.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月29日 星期六 15时38分56秒
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
#define MAX 100000
int prime[MAX + 5];
int is_prime[MAX + 5];
bool is_valid(int x) {
    for(int i = 1; i <= prime[0]; i++) {
        int val = x - prime[i];
        if( (int)sqrt(val/2)*(int)sqrt(val / 2)*2 != val ) continue;
        return true;
    }
    return false;
}
int main() {
    for(int i = 2; i <= MAX; i++) {
        if(is_prime[i] == 0) prime[++prime[0]] = i;

        for(int j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > MAX) break;
            is_prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    for(int i = 9; i <= MAX; i += 2) {
        if(is_prime[i] == 0) continue;
        if(!is_valid(i)) {
            cout << i <<endl;
        }
    }
            return 0;

}
