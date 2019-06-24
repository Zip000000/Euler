/*************************************************************************
	> File Name: 2.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 13时18分41秒
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
#define MAX 4000000
int main() {
    int fib[2] = {1, 2};
    int sum = 2;
    int i = 1;
    int temp1, temp2;
    while(1) {
        i++;
        temp1 = i&1;
        temp2 = !temp1;
        fib[temp1] += fib[temp2];
        if(fib[temp1] > MAX) break;
        if(fib[temp1] & 1 != 0) sum += fib[temp1];
    }
    printf("i = %d sum = %d\n", i, sum);
    
    return 0;
}
