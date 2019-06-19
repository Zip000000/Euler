/*************************************************************************
	> File Name: 45.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 14时16分20秒
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

long long H(long long n) {
    return n * (2 * n - 1);
}
long long P(long long n) {
    return n * (3 * n - 1) / 2;
}

int main() {
    long long n = 165;
    long long m = 144;
    while(P(n) != H(m)) {
        //printf("n = %lld m = %lld pn = %lld Hm = %lld\n", n, m, P(n), H(m));
        if(P(n) > H(m)) m++;
        else n++;
    }

    printf("%lld = %lld \n", P(n), H(m));
    
    
    return 0;
}
