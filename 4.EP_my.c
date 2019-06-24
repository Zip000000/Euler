/*************************************************************************
	> File Name: 4.EP_my.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月24日 星期一 14时31分23秒
 ************************************************************************/

#include<stdio.h>

int is_hui(int n) {
    int tmp = 0;
    while(n > tmp) {
        tmp = 10 * tmp + n % 10;
        n /= 10;
    }
    if(n == tmp) return 1;
    return 0;
}

int main() {
    int max = 0;
    for(int i = 1000 - 1; i >= 100; i--) {
        for(int j = 1000 - 1; j >= 100; j--) {
            int tmp = i * j;
            if(tmp < max) continue;
            if(is_hui(tmp)) max = tmp;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
