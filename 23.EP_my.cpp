/*************************************************************************
	> File Name: 23.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月21日 星期五 17时53分43秒
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
#define MAX 28123

int main() {
    int divsum[MAX + 5];
    for(int i = 0; i <= MAX; i++) divsum[i] = 1;
    divsum[0] = divsum[1] = 0;

    for(int i = 2; i * i <= MAX; i++) {
        for(int j = i + 1; i * j <= MAX; j++) {
            divsum[i * j] += i;
            divsum[i * j] += j;
        }
    }
    int pos[MAX + 5] = {0};
    int sum = 0;
    for(int i = 2; i <= MAX; i++) {
        for(int j = i; j <= MAX; j++) {
            if(i + j > MAX) continue;
            if(divsum[i] > i && divsum[j] > j) pos[i + j] = 1;
            //if(i == 12 && j == 12)printf("%d + %d = %d\n", divsum[i], divsum[j], divsum[i]+divsum[j]);
        }
    }
    for(int i = 1; i <= MAX; i++) {
        if(pos[i] == 0) sum += i, printf("%d\n", i);
    }
    printf("%d\n", sum);

}
