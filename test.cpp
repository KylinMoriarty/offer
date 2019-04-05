//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级
//的台阶总共有多少种跳法（先后次序不同算不同的结果）。
#include<iostream>
#include "test.hpp"
using namespace std;

int Solution::jumpFloor(int number) {
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        if(number>2)
            return jumpFloor(number-1)+jumpFloor(number-2);
}//跳台阶

ULL Solution::stairs(int n)
{
    ULL f1=1, f2=2, temp;
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    for(int i=3; i<=n; i++) {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f2;
}//跳台阶 斐波那契数列
