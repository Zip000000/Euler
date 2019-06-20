/*************************************************************************
	> File Name: 13.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 14时50分24秒
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
    char num[100][50];
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 50; j++) {
            scanf("%c", &num[i][j]);
            num[i][j] -= '0';
        }
        getchar();
    }
    
    int ans[20];
    int temp[2] = {0};
    for(int wei = 49; wei >= 0; wei--) {
        for(int n = 0; n < 100; n++) {
            temp[wei % 2] += (int)num[n][wei];
        }
        temp[(wei + 1) % 2] = temp[wei % 2] / 10;
        if(wei > 15) continue;
        ans[4 + wei] = temp[wei % 2] % 10;
    }
    printf("%d\n", temp[1]);
    
    for(int i = 4; i < 20; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    
    return 0;
}
