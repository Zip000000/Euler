/*************************************************************************
	> File Name: 11.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 16时09分39秒
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
#define MAX 20
int num[MAX + 5][MAX + 5];
int dir[4][2] = {0, 1, 1, 1, 1, 0, 1, -1};

int main() {
    printf("???\n");
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++) {
            scanf("%d", &num[i][j]);
        }
    } 
    long long max = 0;
    for(int i = 1; i <= MAX; i++) {
        for(int j = 1; j <= MAX; j++) {
            for(int x = 0; x < 4; x++) {
                long long tmp = num[i][j]; 
                for(int cnt = 1; cnt <= 3; cnt++) {
                    if(i + 3 * dir[x][0] <= MAX && j + 3 * dir[x][1] <= MAX) tmp *= num[i + cnt * dir[x][0]][j + cnt * dir[x][1]];
                }
                if(tmp > max) max = tmp;
                printf("i =%d j = %d x = %d tmp =  %lld max = %lld\n", i,j,x,tmp,max);
            }
        }
    }
    printf("%lld\n", max);
    
    
    
    return 0;
}
