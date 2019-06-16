/*************************************************************************
	> File Name: 7.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 09时05分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_prime(int num) {
    if(num <= 1) return 0;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) return 0;
    }

    return 1;
}

int main() {
    int num = 1;
    int i = 0;
    while(1) {
        if (is_prime(num)) num++, i++;
        else num++;
        if(i == 10001) break;
    }
    cout<<num-1<<endl;
    

    return 0;
}
