/*************************************************************************
	> File Name: 42.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 13时27分27秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include "42.input"
using namespace std;

int tri(int n) {
    return n * (n + 1) / 2;
}

int getwsum(char *s) {
    int sum = 0;
    for(int i = 0; i < strlen(s); i++) {
        sum += (s[i] - 'A' + 1);
    }
    return sum;
}

int is_tri(int n) {
    int l = 0, r = n, mid;
    while(l <= r) {
        mid = (r + l) / 2;
        if(tri(mid) == n) return 1;
        if(tri(mid) > n) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}

int main() {
    int n = sizeof(str) / 100;
    int  sum = 0;
    for(int i = 0; i < n; i++) {
        int wsum = 0;
        wsum = getwsum(str[i]);
        if(is_tri(wsum)) sum++;
    }
    printf("%d\n", sum);


    return 0;
}
