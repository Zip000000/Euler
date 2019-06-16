/*************************************************************************
	> File Name: 9.EP_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 18时29分39秒
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
    
    for(long long i = 1; i < 1000; i++) {
        for(long long j = i; j > 0; j--) {
            if(i * i + j * j == (1000 - i - j) * (1000 - i - j)) {
                cout << i <<" " << j <<" " << (1000-i-j) <<endl;
                cout <<"ans = " << i * j * (1000-i-j)<<endl;
            }
        }

    }
    
    return 0;
}

