#include<iostream>
#include"test.hpp"

using namespace std;

bool Solution::VerifyPostOrderOfBST(vector<int> sequence) {//二叉搜索树的后序遍历序列
        return bst(sequence, 0, sequence.size() - 1);
}

bool Solution::bst(vector<int> seq,int begin,int end){//二叉搜索树
        if(seq.empty() || begin>end)
            return false;
        int i=begin;
        for(;i<end;i++)
        {
            if(seq[i]>seq[end])
                break;
        }
        int j=i;
        for(;j<end;j++)
        {
            if(seq[j]<seq[end])
                return false;
        }

        bool left = true;
        if(i>begin)
            left = bst(seq,begin,i-1);
        bool right = true;
        if(i<end-1)
            right = bst(seq,i,end-1);
        return left&&right;

}

//Solution sol;
//    int a[]={5,7,6,9,11,10,8};
//     vector<int> v(a,a+7);
// if(sol.VerifyPostOrderOfBST(v)) cout<<"1"<<endl;
// if(!sol.VerifyPostOrderOfBST(v)) cout<<"0"<<endl;
//    return 0;
