/*************************************************************************
	> File Name: 8.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 15时06分25秒
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

int main() {
    long long ans = 1;
    char num[1001];
    for(int i = 1; i <= 1000; i++) {
        scanf("%c", num + i);
        if(i % 50 == 0) getchar();
    }
    for(int i = 1; i <= 13; i++) {
        ans *= (num[i] - '0');
    }

    long long max = 0;
    int cnt_zero = 0;
    for(int i = 2; i <= 1000 - 12; i++) {
        if(num[i + 12] != '0') ans *= (num[i + 12] - '0');
        else cnt_zero++;
        if(num[i - 1] != '0') ans /= (num[i - 1] - '0');
        else cnt_zero--;
        if(cnt_zero == 0 && ans > max) max = ans;
        printf("%d -- %d  =  %lld\n", i, i+12, ans);
    }
    printf("max = %lld\n", max);

    return 0;
}
