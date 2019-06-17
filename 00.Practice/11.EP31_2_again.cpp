/*************************************************************************
	> File Name: 11.EP31_2_again.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 20时12分40秒
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

int w[8] = {1, 2, 5, 10, 20, 50, 100, 200};
#define MAX_M 8
#define MAX_N 200
int f[MAX_M + 5][MAX_N + 5] = {0};

int main() {

    for(int i = 0; i < MAX_M; i++) {
        f[i][0] = 1;
        for(int j = 1; j <= MAX_N; j++) {
            if(j >= w[i]) f[i][j] += f[i][j - w[i]] ;
            if(i - 1>= 0)  f[i][j] += f[i - 1][j];
        }
    }
    cout << f[MAX_M - 1][MAX_N]<<endl;


    return 0;
}
