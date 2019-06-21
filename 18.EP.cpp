/*************************************************************************
	> File Name: 18.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 20时10分42秒
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
#define MAX 15
int tri[MAX][MAX];
int main() {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j <= i; j++) {
            scanf("%d", &tri[i][j]);
        }
        getchar();
    }
    int cmp[MAX];
    for(int i = MAX - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            if(tri[i+1][j] > tri[i+1][j+1]) tri[i][j] += tri[i+1][j];
            else tri[i][j] += tri[i+1][j+1];
        }
    }
    
    printf("%d\n", tri[0][0]);

    
    
    return 0;
}
