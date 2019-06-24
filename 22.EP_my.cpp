/*************************************************************************
	> File Name: 22.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月21日 星期五 15时54分20秒
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

void get_namelist(char namelist[][50]) {
    int i = 0;
    while(scanf("%s,", namelist[i]) != EOF) {
        i++;
    }
}
void print(char namelist[][50]) {
    for(int i = 0; i < 1; i++) {
        printf("%s,", namelist[i]);
    }
}

int main() {
    char namelist[6000][50];
    get_namelist(namelist);
    //print(namelist);
    printf("%s\n", namelist[1]);

    
    
    return 0;
}
