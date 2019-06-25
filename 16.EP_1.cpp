/*************************************************************************
	> File Name: 16.EP_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月25日 星期二 18时13分27秒
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
#define MAX 400
int num[MAX + 5];

int main() {
    num[0] = num[1] = 1;
    for(int i = 0; i < 100; i++) {
        for(int j = 1; j <= num[0]; j++) num[j] *= 1024;
        for(int j = 1; j <= num[0]; j++) {
            if(num[j] < 10) continue;
            num[j + 1] += num[j] / 10;
            num[j] %= 10;
            num[0] += (j == num[0]);
        }
    }
    int sum = 0;
    for(int i = num[0]; i >= 1; i--) {
        sum += num[i];
    }
    printf("%d\n", sum);
    return 0;
}
