/*************************************************************************
	> File Name: Euler_Problem_1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 19时11分53秒
 ************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int sum_three=0;
    int sum_five=0;
    int sum_neg=0;
    int count=1;
    int sum=0;
    int bei=1;
    while(1)
    {
        count=3 * bei;
        bei++;
        if(count>=1000) break;
        sum_three += count;
    }
    count=1;
    bei=1;
    while(1)
    {
        count=5 * bei;
        bei++;
        if(count>=1000) break;
        sum_five += count;
    }
    count=1;
    bei=1;
    while(1)
    {
        count=15 * bei;
        bei++;
        if(count>=1000) break;
        sum_neg = sum_neg - count;
    }
    cout<<"3333="<<sum_three<<endl;
    cout<<"5555="<<sum_five<<endl;
    cout<<"----="<<sum_neg<<endl;
    sum=sum_five+sum_three+sum_neg;
    cout<<"sum="<<sum<<endl;
    
    return 0;
}





