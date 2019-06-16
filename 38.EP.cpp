/*************************************************************************
	> File Name: 38.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 15时05分15秒
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

int digits(long long num) {
    return floor(log10(num)) + 1;
}
long long calc(int x) {
    long long ans = 0;
     int n = 1;
    while ( digits(ans) < 9)  {
        ans *= pow(10, digits(n * x));
        ans += n * x;
        n += 1;
    }
    if(digits(ans) != 9) return -1;
    int num[10] = {0};
    num[0] = 1;
    long long temp = ans;
    while(temp) {
        if(num[temp % 10]) return -1;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}

int main() {
    long long temp=0, ans=0;
    for(int i = 1; i < 10000; i++) {
        temp = calc(i);
        if(temp > ans) ans = temp;
    }
    cout << ans <<endl ;
    return 0;
}
