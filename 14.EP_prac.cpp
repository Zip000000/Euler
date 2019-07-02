/*************************************************************************
	> File Name: 14.EP_prac.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 15时26分18秒
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

long long get_length(long long n) {
    if(n == 1) return 1;
    if(n & 1)  return get_length(3 * n + 1) + 1;
    else return get_length(n / 2) + 1;
}


int main() {
    long long max = 0;
    int ans;
    for(int i = 1; i < MAX; i++) {
        long long temp = get_length(i);
        if(temp > max) max = temp, ans = i;
    }

    printf("%d\n", ans);

    
    return 0;
}
