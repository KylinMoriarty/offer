//��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
#include<iostream>
#include"test.hpp"
using namespace std;

int Solution::Sum_Solution1(int n) {
        return n==1?1:(n+Sum_Solution1(n-1));
}

int Solution::Sum_Solution2(int n) {//ע��&&�и���Ҫ�����ʣ�A&&B�����AΪfalse�򲻻����B��
        int ans=n;
        n&&(ans=n+Sum_Solution2(n-1));
        return ans;
}

struct temp
{
    static int sum;     //��¼��ǰ�ĺ�
    static int i;       //��¼��ǰ����
    temp()
    {
        i++;
        sum+=i;
    }
};

//��ʼ��
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
