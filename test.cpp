//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n��
//��̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
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
}//��̨��

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
}//��̨�� 쳲���������
