/*************************************************************************
	> File Name: 14.EP_prac.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 15时26分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX 1000000

int mem[MAX + 5];

long long get_length(long long n) {
    if(n == 1) return 1;
    if(n < MAX && mem[n] != 0) return mem[n];
    long long ret;
    if(n & 1) ret = get_length(3 * n + 1) + 1;
    else ret = get_length(n / 2) + 1;
    if(n < MAX) mem[n] = ret;
    return ret;
}

int main() {
    long long max_len = 0, num = 0;

    for(int i = 1; i < 1000000; i++) {
        long long l = get_length(i);
        if(l > max_len) max_len = l, num = i;
    }
    cout << num <<" " << max_len << endl;
    
    return 0;
}
/*
int main() {
    long long max = 0;
    int ans;
    for(int i = 1; i < MAX; i++) {
        long long temp = get_length(i);
        if(temp > max) max = temp, ans = i;
    }

    printf("%d\n", ans);

    
    return 0;
}
*/
