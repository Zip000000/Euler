/*************************************************************************
	> File Name: 31.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月15日 星期六 20时36分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 8
#define MAX_M 200
    
    
int w[MAX_N + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
long long f[MAX_N + 5][MAX_M + 5];



int main() {

    for(int i = 0; i < MAX_N; i++) {
        f[i][0] = 1;
        for(int j = 1; j <= MAX_M; j++) {
            f[i][j] = 0;
            if(i - 1 >= 0) f[i][j] = f[i - 1][j];
            if(j >= w[i]) f[i][j] += f[i][j-w[i]];

        }
    }

    cout << f[MAX_N -1][MAX_M] << endl;

    return 0;
}
