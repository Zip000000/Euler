/*************************************************************************
	> File Name: Euler_Problem_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 20时38分30秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int f_a=0;
    int f_b=1;
    int f=2;
    sum+=f;
    while(1)
    {
        f_a = f_b;
        f_b = f;
        f= f_a + f_b; 
        cout<<f<<endl;
        if(f>4000000) break;
        if(f%2 == 0)  sum+=f;
        cout<<"sum="<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
