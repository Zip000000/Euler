
/*************************************************************************
	> File Name: 3.Euler_Problem_1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月19日 星期日 19时04分52秒
 ************************************************************************/

#include<stdio.h>

#define N 600851475143LL


int main() {
    long long num = N, ans;
    int i = 2;
    
    while (i * i <= num) {
        if(num % i == 0) ans = i;
        while (num % i == 0) num /= i;  //剔除所有i因子
        i++;
    }

    if (num != 1) ans = num;     //需要证明
    //暂时的想法：剔除了所有小于根号n的因子，剩下的数字如果不是1，就一定是大于根号n的最大的质因子。 也就是说到这一步之前，ans中存储的是小于根号n的最大的质因子。
    printf("%lld\n", ans);


    return 0;
}
