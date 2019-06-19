/*************************************************************************
	> File Name: 43.EP_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 16时18分26秒
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
int prime[8] = {0,2,3,5,7,11,13,17};

long long is_ans(int num[]) {
    long long result;
    for(int i = 1; i <= 7; i++) {
        int temp = num[i] * 100 + num[i + 1] * 10 + num[i + 2];
        if(temp % prime[i] != 0) return 0;
    }
    for(int i = 0; i < 10; i++) {
        result += pow(10, 9-i) * num[i];
    }
    printf("result = %lld\n", result);
    return result;
}

int main() {
    
    int num[] = {0,1,2,3,4,5,6,7,8,9};
    long long sum = 0;
    for(int i = 1; i <= 3628800; i++) {
        next_permutation(num, num + 10);
        long long result = 0;
        if(result = is_ans(num)) sum += result; 
    }
    printf("%lld\n", sum);
    
    return 0;
}
