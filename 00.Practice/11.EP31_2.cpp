/*************************************************************************
	> File Name: 11.EP31_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 19时34分08秒
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
/*
int f(int n, int m) {
    cout << n << " " << m << endl;
    if(n == 0) return 0;
    if(m == 0) return 1;
    if(m >= w[n-1]) return f(n-1, m) + f(n, m-w[n-1]);
    else return f(n-1, m);
}
*/

#define MAX_N 8
#define MAX_M 200
int w[8] = {1, 2, 5, 10, 20, 50, 100, 200};
long long f[MAX_N + 5][MAX_M + 5];
int main() {
    for(int i = 0; i < MAX_N; i++) {
        f[i][0] = 1;
        for(int j = 1; j <= MAX_M; j++) {
            f[i][j] = 0;
            if(i - 1 >= 0) f[i][j] += f[i - 1][j];
            if (j >= w[i]) f[i][j] += f[i][j - w[i]];
        }
    }
    cout << f[MAX_N - 1][MAX_M] <<endl;
    return 0;
}
