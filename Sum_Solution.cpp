//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
#include<iostream>
#include"test.hpp"
using namespace std;

int Solution::Sum_Solution1(int n) {
        return n==1?1:(n+Sum_Solution1(n-1));
}

int Solution::Sum_Solution2(int n) {//注意&&有个重要的性质：A&&B，如果A为false则不会计算B。
        int ans=n;
        n&&(ans=n+Sum_Solution2(n-1));
        return ans;
}

struct temp
{
    static int sum;     //记录当前的和
    static int i;       //记录当前加数
    temp()
    {
        i++;
        sum+=i;
    }
};

//初始化
int temp::sum=0;
int temp::i=0;

int Solution::Sum_Solution3(int n) {
       temp* p =new temp[n];
       delete[] p ;
       return temp::sum;
}
//     Solution sumsol;
//     cout<<sumsol.Sum_Solution1(10)<<endl;
//     cout<<sumsol.Sum_Solution2(10)<<endl;
//     cout<<sumsol.Sum_Solution3(10)<<endl;
