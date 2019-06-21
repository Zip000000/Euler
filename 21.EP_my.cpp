/*************************************************************************
	> File Name: 21.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月21日 星期五 17时16分38秒
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
#define MAX 10000


int main() {
    int prime[MAX + 5];
    for(int i = 0; i < MAX + 5; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= MAX; i++) {
        for(int j = i + 1; j * i <= MAX; j++) {
            prime[i * j] += i;
            prime[i * j] += j;
        }
    }


    int sum = 0;
    for(int i = 2; i < MAX; i++) {
        if(prime[i] >= MAX || prime[i] == i) continue;
        if(i == prime[prime[i]]) sum += i,    
        printf("d[%d] = %d  d[%d] = %d \n", i, prime[i], prime[i], prime[prime[i]]);
        //每次只加左边的i  ，因为是数对，每个数字会出现两次。
    }
    printf("%d\n", sum);
    
    
    return 0;
}
