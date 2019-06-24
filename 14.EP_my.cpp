/*************************************************************************
	> File Name: 14.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 20时00分55秒
 ************************************************************************/
 #include <stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define MAX 1000000

int f[MAX + 5] = {0};

int get_ans(long long n) {
    if(n <= MAX && f[n] != 0) return f[n];
    long long ret;
    if(n & 1) ret = get_ans(3 * n + 1) + 1;
    else ret = get_ans(n / 2) + 1;
    if(n <= MAX) f[n] = ret;
    return ret;

}

int main() {
    int max = 0;
    int num = 0;
    f[1] = 1;
    f[2] = 2;
    for(long long i = 3; i < MAX; i++) {
        f[i] = get_ans(i);
        if(f[i] > max) max = f[i], num = i;
    }
    printf("%d %d\n", max, num);
    
    return 0;
}
