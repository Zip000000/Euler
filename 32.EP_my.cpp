/*************************************************************************
	> File Name: 32.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 13时42分57秒
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
#define MAX 100000
int flags[MAX] = {0};

int digits(int n) {
    return floor(log10(n)) + 1;
}
int calc(int a, int numflags[]) {
    int dig = digits(a);
    for(int i = 0; i < dig; i++) {
        int temp = a % 10;
        if(temp == 0) return 0;
        if(numflags[temp]) return 0;
        numflags[temp] = 3;
        a /= 10;
    }
    return 1;
}

int is_pandigital(int a, int b, int c) {
    int numflags[10] = {0};
    if(!calc(a, numflags)) return 0;
    if(!calc(b, numflags)) return 0;
    if(!calc(c, numflags)) return 0;
    for(int i = 1; i <= 9; i++) {
        if(numflags[i] == 0) return 0;
    }
    return 1;
}

int main() {
    int sum = 0;
    for(int i = 1; i < 100; i++) {
        for(int j = i + 1; j < 10000; j++) {
            int ij = i * j;
            if(digits(i) + digits(j) + digits(ij) != 9) continue;
            if(is_pandigital(i, j, ij) && flags[ij] == 0) sum += ij, flags[ij] = 1;
        }
    }
    printf("%d\n", sum);


    return 0;
}
