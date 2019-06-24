/*************************************************************************
	> File Name: 1.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 13时13分54秒
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
#define MAX 1000
int num[MAX + 5] = {0};
int main() {
    for(int i = 0; i * 3 <= MAX; i++) {
        num[i * 3] = 1;
    }
    for(int i = 0; i * 5 <= MAX; i++) {
        num[i * 5] = 1;
    }
    int sum = 0;
    for(int i = 0; i < MAX; i++) {
        if(num[i] == 0) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
