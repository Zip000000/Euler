/*************************************************************************
	> File Name: haizei43.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月25日 星期二 19时31分33秒
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
#define MAX 1005
int tri[MAX][MAX];
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            scanf("%d", &tri[i][j]);
        }
        getchar();
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            if(tri[i+1][j] > tri[i+1][j+1]) tri[i][j] += tri[i+1][j];
            else tri[i][j] += tri[i+1][j+1];
        }
    }
    printf("%d\n", tri[0][0]);
    return 0;
}

