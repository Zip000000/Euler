/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 21时06分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include <stdio.h>
#define MAX_N 4000000

int main() {



        int fib[2] = {1, 1}, n = 2, ans = 0;
    while (fib[(n - 1) % 2] <= MAX_N) {
                if (fib[(n - 1) % 2] % 2 == 0) ans += fib[(n - 1) % 2];
                fib[n % 2] += fib[(n - 1) % 2];
                n += 1;
                    
    }
        printf("%d\n", ans);
        return 0;

}
