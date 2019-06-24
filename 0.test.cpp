/*************************************************************************
	> File Name: 0.test.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 14时53分12秒
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

void print_bin(int a) {
    int cnt = 0;

    while(a != 0 && a != -1) {
        if(a & 1) {
            printf("%d ", 1);
        } else {
            printf("%d ", 0);
        }
        a >>= 1;
        cnt++;
        if(cnt % 4 == 0) printf(" | ");
    }
        if(a & 1) {
            printf("%d ", 1);
        } else {
            printf("%d ", 0);
        }
        a >>= 1;
        cnt++;
        if(cnt % 4 == 0) printf(" | ");
    printf("\n");
}


int main() {
    int a = 2147483647;
    printf("%d\n", a);
    print_bin(a);
    a++;
    printf("%d\n", a);
    print_bin(a);
    a++;
    printf("%d\n", a);
    print_bin(a);

    unsigned int b = 2147483647;
    printf("b = %d\n", b);
    print_bin(b);
    b++;
    printf("b = %u\n", b);
    print_bin(b);
    b++;
    printf("b = %u\n", b);
    print_bin(b);
    b++;

    
    return 0;
}
