/*************************************************************************
	> File Name: 56.haizei.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月27日 星期四 10时52分11秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>

#define MAX 1000000
#define N 10
using namespace std;
int num[N];
int fact[N];
int ans[N];

void init() {
    fact[0] = 1;
    num[0] = 1;
    ans[0] = 0;
    for(int i = 1; i < N; i++) {
        num[i] = 1;
        ans[i] = i;
        fact[i] = fact[i - 1] * i;
    }
}

void show_arr(int *);

int main() {
    init();
    int step = MAX - 1;
    for(int i = 0; i < N; i++) {
        if(step >= fact[N-1 - i]) {
            int jump = step / fact[N-1 - i];
            step %= fact[N-1 - i];
            //printf("ans %d = %d jump = %d\n", i, ans[i], jump);
            show_arr(num);
            while(jump > 0) {
                ans[i]++;
                if(num[ans[i]] == 1) jump--;
            }
            //while(num[ans[i]] == 0) ans[i]++;
            num[ans[i]] = 0;
            //ans[i + 1] = remain_min(num);
            //reset_ans(i + 1);
            for(int r = 0; r < N; r++) {
                if(num[r] == 0)continue;
                ans[i + 1] = r;
                break;
            }
            //printf("final ans = %d\n", ans[i]);
        } else {
            num[ans[i]] = 0;
        }
    }
    show_arr(ans);
    return 0;
}

void show_arr(int *arr) {
    for(int i = 0; i < N; i++) { 
        printf("%d ", arr[i]);
    }
    printf("\n");
}
