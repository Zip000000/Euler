/*************************************************************************
	> File Name: 15.EP_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 21时02分37秒
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

int main() {
    long long ans = 1, n = 40, m = 20;
    while ( n != 20 || m != 0) {
        if(n != 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--);
    }
    cout <<ans <<endl;
    return 0;
}
