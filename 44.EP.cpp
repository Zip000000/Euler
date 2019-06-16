/*************************************************************************
	> File Name: 44.EP.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月16日 星期日 16时16分26秒
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
#define MAX 0xfffffffffffffffLL

long long p(long long n) {
    return n * (3 * n - 1) / 2;
}

int binary_search(long long (*func)(long long), long long n, long long x){
    long long head = 1, tail = n,mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if(func(mid) == x) return mid;
        if(func(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}


int main() {
    long long D = MAX;
    long long pk, pj, n = 2;
    while (p(n) - p(n - 1) < D) {
        pk = p(n);
        for (int j = n - 1; j >= 1; j--) {
            pj = p(j);
            if(pk - pj >= D) break;
            int ind1 = binary_search(p, 2 * n, pk + pj);
            int ind2 = binary_search(p, n, pk - pj);
    //cout << pj <<" " << pk << " " << D << endl;
            if(ind1 && ind2) {
                D = pk - pj;
            }
        }
        n++;
    }
    cout << pj <<" " << pk << " " << D << endl;
    return 0;
}
