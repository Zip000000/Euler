/*************************************************************************
	> File Name: 3.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 13时39分05秒
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
    long long n = 600851475143;
    int ans = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) ans = i;
        else continue;
        while(n % i == 0) n /= i;
    }

    if(n != 1) ans = n;
    printf("ans = %d\n", ans);
    
    
    return 0;
}
