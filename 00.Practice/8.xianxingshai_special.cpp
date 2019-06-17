/*************************************************************************
	> File Name: 8.xianxingshai.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 21时58分13秒
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

int main() {
    #define MAX 200000
    int prime[MAX+5];
    for(int M = 2; M <= MAX; M++) {
        if(prime[M] == 0) prime[++prime[0]] = M;
        for(int j = 1; j <= prime[0]; j++) {
            if(M * prime[j] > MAX) break;
            prime[M * prime[j]] = M;
            if(M % prime[j] == 0) break; 
        }
    }
    cout << prime[10001] <<endl;

    return 0;
}
