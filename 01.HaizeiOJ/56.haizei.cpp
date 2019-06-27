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
using namespace std;

int n;

void init(int *fact, int *num, int *ans) {
    fact[0] = 1;
    num[0] = 1;
    ans[0] = 1;
    for(int i = 1; i < n; i++) {
        num[i] = 1;
        ans[i] = i + 1;
        fact[i] = fact[i - 1] * i;
    }
}
void show_arr(int *arr) {
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int max;
    scanf("%d %d", &n, &max);
    int fact[n], num[n], ans[n];
    init(fact, num, ans);
    
    int step = max - 1;
    for(int i = 0; i < n; i++) {
        if (step >= fact[n-1 - i]) {
            int jump = step / fact[n-1 - i];
            step %= fact[n-1 - i];
            while(jump > 0) {
                ans[i]++;
                if(num[ans[i] - 1] == 1) jump--;
            }
        }
        num[ans[i] - 1] = 0;
        for(int r = 1; r <= n; r++) {
            if(num[r - 1] == 0) continue;
            ans[i + 1] = r;
            break;
        }
    }
    show_arr(ans);
    return 0;
}
