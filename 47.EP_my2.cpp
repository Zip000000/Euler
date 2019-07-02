/*************************************************************************
	> File Name: 47.EP_my2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 11时40分10秒
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
    
    for(int i = 2; i <= MAX ; i++) {
        if(prime[i]) continue;
        for(int j = 1; j * i <= MAX; j++) {
            prime[i * j]++;
        }
    }


    for(int i = 1; i <= MAX; i++) {
        int flag = 1;
        for(int j = 0; j < 4 && flag; j++) {
            flag = (prime[i + j] == 4);
        }

        if(flag == 1) {
            cout << i << endl;
            break;
        }
    }
    
    


    return 0;
}
