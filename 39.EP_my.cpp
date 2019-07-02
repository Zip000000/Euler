/*************************************************************************
	> File Name: 39.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 14时21分53秒
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

#define MAX 1000

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans[MAX + 5] = {0};    //挪到主函数外面  或者 改成 + 50000多加点  答案就对了。。。

    for(int m = 1; m <= 32; m++) {
        for(int n = m + 1; n <= 32; n++) {
            if(gcd(m, n) != 1) continue;
            int a = m * m + n * n;
            int b = 2 * m * n;
            int c = n * n - m * m;
            for(int p = a + b + c; p <= MAX; p += (a + b + c)) {
                if (p <= MAX) ans[p] += 1;
            }
        }
    }

    int max = 0;
    for(int i = 1; i <= MAX; i++) {
        if(ans[i] > ans[max]) max = i;
    }
    cout << max <<endl;

    return 0;
}
