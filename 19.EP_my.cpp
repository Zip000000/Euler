/*************************************************************************
	> File Name: 19.EP_my.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月21日 星期五 16时30分16秒
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

int mrun[13] = {0, 31, 29, 31, 30, 
                31, 30, 31, 31, 
                30, 31, 30, 31};
int mping[13] = {0, 31, 28, 31, 30, 
                31, 30, 31, 31, 
                30, 31, 30, 31};

int is_run(int y) {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

int get_daynum(int mon, int y) {
    if(is_run(y)) return mrun[mon];
    return mping[mon];
}

int main() {
    int daycount = 0;
    int ans = 0;

    for(int y = 1900;y < 2001; y++) {
        for(int mon = 1; mon <= 12; mon++) {
            int  daynum = get_daynum(mon, y);
            for(int d = 1; d <= daynum; d++) {
                daycount++;
                if(y >= 1901 && d == 1 && daycount % 7 == 0) ans++, printf("%d : %d : %d : %d : %d \n", y, mon, d, daycount, daycount % 7);
                

            }
        }
    }
    printf("%d\n", ans);

    
    
    return 0;
}
