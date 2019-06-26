/*************************************************************************
	> File Name: 24.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月26日 星期三 19时29分36秒
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
#define MAX 1000000

int fact[10] = {0, 1};
int num[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int ans[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int remain_min(int* arr) {
    for(int i = 0; i <10; i++) {
        if(arr[i] == 0) continue;
        arr[i] = 0;
        return i;
    }
}
int is_over() {
    for(int i = 0; i <10; i++) {
        if(num[i] == 1) return 0;
    }
    return 1;
}

void show_ans() {
    printf("ans = ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
}

void show_num() {
    printf("ans = ");
    for(int i = 0; i < 10; i++) {
        printf("[%d]: = %d ", i, num[i]);
    }
    printf("\n");
}

void reset_ans(int n){
    int temp[10];
    for(int i = 0; i < 10; i++) {
        temp[i] = num[i];
    }
    for(int i = 9-n; i < 10; i++) {
        ans[i] = remain_min(temp);
    }
}
int main() {
    for(int i = 2; i < 10; i++) {

        fact[i] = fact[i - 1] * i;
    }


    for(int i = 0; i < 10; i++) {
        printf("%d ", fact[i]);
    }

    printf("\n");
    
    int step = MAX - 1;
    int n = 9;
    while(!is_over()) {
        if(step >= fact[n]) {
            ans[9 - n] += floor(step / fact[n]);
            num[ans[9 - n]] = 0;
            printf("handle: %d - %d * face[%d] : ans[%d] = %d\n", step, step/fact[n], n, 9-n, ans[9-n]);
            step %= fact[n];
            n--;
            reset_ans(n);
        } else {
            //ans[9 - n] = remain_min(num);
            num[9 - n] = 0;
            n--;
        }
        show_ans();
        show_num();
    }
    show_ans();
    

    return 0;
}
