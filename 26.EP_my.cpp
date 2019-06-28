/*************************************************************************
	> File Name: 26.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月28日 星期五 13时50分16秒
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

int recid[MAX]; //rec[余数] = 出现的id

int rec(int n) {
    memset(recid, 0, sizeof(recid));
    int r = 1;
    int id = 0;
    printf("%d : ", n);
    while(1) {
        id++;
        r *= 10;
        r = r % n;
        //printf("r%d = %d  ", id, r);
        if(r == 0) return 0;
        if(recid[r] == 0) recid[r] = id;
        else return (id - recid[r]);
    }
}

int main() {
    int max = 0;
    int who;
    for(int i = 2; i < MAX; i++) {
        int temp = rec(i);
        if(temp > max) max = temp, who = i;
        printf(" %d \n", temp);
    }
    printf("who = %d\n", who);
    return 0;
}
