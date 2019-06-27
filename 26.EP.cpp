/*************************************************************************
	> File Name: 26.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月27日 星期四 18时50分29秒
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

#define MAX_N 1000
int r_len[MAX_N + 5];

int get_length(int d) {
    int r = 1, t = 1;
    memset(r_len, 0, sizeof(r_len));
    r_len[r - 1] = 1;
    while(r) {
        r = r * 10 % d;
        t++;
        if(r_len[r]) return t - r_len[r];
        r_len[r] = t;
    }
    return 0;
}


int main() {



    return 0;
}
