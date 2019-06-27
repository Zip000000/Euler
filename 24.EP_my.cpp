/*************************************************************************
	> File Name: 24.EP-my_2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月27日 星期四 10时01分41秒
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
int num[10];
int fact[10];
int ans[10];
void init() {
    fact[0] = 1;
    num[0] = 1;
    ans[0] = 0;
    for(int i = 1; i <= 9; i++) {
        num[i] = 1;
        ans[i] = i;
        fact[i] = fact[i - 1] * i;
    }
}
void show_arr(int *arr) {
    for(int i = 0; i <= 9; i++) { 
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int remain_min(int *arr) {
    for(int i = 0; i <= 9; i++) {
        if(arr[i] == 0) continue;
        arr[i] = 0;
        return i;
    }
}
void reset_ans(int n) {
    int temp[10];
    for(int i = 0; i <= 9; i++) {
        temp[i] = num[i];
    }
    for(int i = n; i <= 9; i++) {
        ans[i] = remain_min(temp);
    }
}
int main() {
    init();
    show_arr(fact);
    show_arr(num);
    show_arr(ans);
    int step = 1000000 - 1;
    for(int i = 0; i <= 9; i++) {
        if(step >= fact[9 - i]) {
            int jump = step / fact[9 - i];
            step %= fact[9 - i];
            //printf("ans %d = %d jump = %d\n", i, ans[i], jump);
            show_arr(num);
            while(jump > 0) {
                if(num[ans[i]] == 0) ans[i]++;
                else jump--, ans[i]++;
            }
            while(num[ans[i]] == 0) ans[i]++;
            num[ans[i]] = 0;
            reset_ans(i + 1);
            //printf("final ans = %d\n", ans[i]);
        } else {
            num[ans[i]] = 0;
        }
    }
    show_arr(ans);
    return 0;
}
