/*************************************************************************
	> File Name: 44.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月19日 星期三 14时41分37秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include <climits>
using namespace std;

long long P(long long n) {
    return n * (3 * n - 1) / 2;
}

int is_Penta(long long n, long long tail) {
    long long head = 1, mid, pmid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        pmid = P(mid);
        if(pmid == n) return 1;
        if(pmid < n) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    long long D = LLONG_MAX;
    long long n = 2, pn, pj;
    while(P(n) - P(n-1) < D) {
        pn = P(n);
        for(int j = n - 1; j >= 1; j--) {
            pj = P(j);
            if(pn - pj >= D) break; 
            int ind1 = is_Penta(pn + pj, 2 * n);
            int ind2 = is_Penta(pn - pj, n);
            if(ind1 && ind2) {
                D = pn - pj;
            }
        }
        n++;
    }
    printf("%lld\n", D);
    return 0;
}



            //printf("P(%lld) = %lld and P(%lld) = %lld\n", i, pi, j, pj);
            //if(is_Penta(pi + pj, 2 * i) && is_Penta(pi - pj, i)) {
