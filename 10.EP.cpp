/*************************************************************************
	> File Name: 10.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 10时52分21秒
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

#define MAX_N 2000005
int is_prime[MAX_N + 5]; //数表
int prime[MAX_N + 5];   //保存素数

int main(){
    for(int M = 2; M <= MAX_N; M++) {
        if(is_prime[M] == 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++){
            if(prime[j] * M > MAX_N) break;
            is_prime[prime[j] * M] = 1;
            if(M % prime[j] == 0) break;  //!!!!!
        }
    }
    
    long long sum = 0;
    int i = 1;
    while(prime[i] < 2000000) {
        sum+=prime[i];
        i++;
    }
    cout<<sum<<endl;





    return 0;
}
