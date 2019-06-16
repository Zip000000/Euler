/*************************************************************************
	> File Name: 0.test.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 14时53分12秒
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
int p(int n) {
    return n*(3*n-1)/2;
}
int is_p(int n){
    int i = 1 ;
    while(p(i) < n) {
        i++;
    }
    if(p(i) == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    for(int i = 2; i < MAX; i++) {
        for(int j = 1; j < i; j++) {
            int sum = p(i) + p(j);
            if(!is_p(sum)) continue;
            int dif = p(i) - p(j);
            if(!is_p(dif)) continue;
            cout << "i=" <<i<<endl;
            cout <<"j=" << j<<endl;

        }
    }

    return 0;
}
