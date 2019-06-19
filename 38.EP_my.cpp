/*************************************************************************
	> File Name: 38.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 19时51分21秒
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

int digits(long long n) {
    return floor(log10(n)) + 1;
}
long long is_ansnum(long long n) {
    int flags[10] = {0};
    long long ans = n;
    while(n > 0) {
        flags[n % 10] += 1;
        n /= 10;
    }
    for(int i = 1; i <= 9; i++) {
        if(flags[i] == 0) return 0;
        if(flags[i] > 1) return 0;
    }
    printf("got it %lld\n", ans);
    return 1;
}

long long is_ans(long long ans) {
    for(long long i = 2; i < 10; i++) {
        ans = ans * pow(10,digits(ans * i)) + ans * i;
        if(digits(ans) == 9 && is_ansnum(ans)) {
            return ans;
        }
        if(digits(ans) > 9) break;
    }
    return 0;
}

int main() {
    long long num = 1;
    long long max = 0;
    long long ans;
    while(num < 100000) {
        //printf("now is %d\n", num);
        ans = is_ans(num);
        if(ans && ans > max) max = ans;
        num++;
    }
    printf("%lld\n", max);
    return 0;
}
