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
#include "22.input.txt"
using namespace std;


int cmp(char *a, char *b) {
    return strcmp(a, b);
}

int main() {
    int n = sizeof(str) / 100;
    char *pstr[6000];
    for(int i = 0; str[i]; i++) {
        pstr[i] = str[i];
    }
    sort(pstr, pstr+n-1, cmp);
    
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        long long tmp = i + 1;
        int ta = 0;
        for(int m = 0; str[i][m]; m++) {
            ta += str[i][m] - 'A' + 1;
        }
        tmp *= ta;
        sum += tmp;
    }
    cout << sum <<endl;
    
    return 0;
}
