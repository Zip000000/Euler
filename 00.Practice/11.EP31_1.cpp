/*************************************************************************
	> File Name: 11.EP31_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月17日 星期一 19时06分25秒
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

int w[8] = {1, 2, 5, 10, 20, 50, 100, 200};

int f(int n, int m) {
    cout << n << " " << m << endl;
    if(n == 0 || m < 0) return 0;
    if(m == 0) return 1;
    return f(n-1, m) + f(n, m-w[n-1]);
}

int main() {
    cout << f(8, 200) <<endl;


    return 0;
}
