#include<iostream>
#include"test.hpp"
#include<vector>
using namespace std;

/*
输入两个整数序列，第一个序列表示栈的压入顺序，
请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。
例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，
但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
*/

bool Solution::IsPopOrder(vector<int> pushV,vector<int> popV){
        if(pushV.size()!=popV.size()) return false;
        vector<int> vec;
        for(int i=0,j=0;i<pushV.size();i++)
        {
                vec.push_back(pushV[i]);
                while(j<popV.size()&&vec.back()==popV[j])
                {
                    vec.pop_back();
                    j++;
                }
        }
        return vec.empty();
}
//void Print(vector<int> &myarray)
//{
//    int num=myarray.size();
//    for(int i=0; i<num;i++)
//         cout<<myarray[i]<<"  ";
//    cout<<endl;
//    return;
//}
//
//vector<int> Arr2Vec(int myarray[],int num)
//{
//    vector<int> vec;
//    vec.clear();
//    for(int i=0;i<num;i++)
//        vec.push_back(myarray[i]);
//
//    return vec;
//}
//int main()
//{
//    int array1[]={1,2,3,4,5};
//    int array2[]={4,5,3,2,1};
//    int num1=sizeof(array1)/sizeof(int);
//    int num2=sizeof(array2)/sizeof(int);
//
//    vector<int> pushV=Arr2Vec(array1,num1);
//    vector<int> popV= Arr2Vec(array2,num2);
//
//    cout<<"pushV:"<<endl;
//    Print(pushV);
//    cout<<"popV:"<<endl;
//    Print(popV);
//    cout<<endl;
//    cout<<IsPopOrder(pushV,popV)<<endl;
//    return 0;
//}
