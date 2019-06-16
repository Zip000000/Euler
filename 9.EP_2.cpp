/*************************************************************************
	> File Name: 9.EP_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 19时21分36秒
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

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 0;
    for(int n = 1; n <= 33; n++) {
        for(int m = n +1; m *m + n * n <= 1000; m++) {
            if(gcd(n, m) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n ;
            int c = m * m + n * n;
            if(1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * pow(k, 3);
            }
        }
    }
    cout << ans <<endl;
        
}
