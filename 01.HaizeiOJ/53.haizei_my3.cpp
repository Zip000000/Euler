/*************************************************************************
	> File Name: 53.haizei_my3.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 12时45分58秒
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
    int a = 1000000;
    //scanf("%d", &a);
    int sum[a + 5];
    memset(sum, 0, sizeof(sum));
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j * i<= a; j++) {
            sum[i * j] += i;
            //if(i != j) sum[i * j] += j;
        }
    }
    int max = 0;
    for(int i = 0; i <= a; i++) {
        if(sum[i] > max) max = sum[i];
    }
    printf("%d", max);

    return 0;
}

