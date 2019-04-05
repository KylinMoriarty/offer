#include<iostream>
#include"test.hpp"
using namespace std;

TreeNode* Solution::reConstructBinaryTree(vector<int> pre,vector<int> vin){
        // �ݹ����
        if(pre.empty()||vin.empty())
            return NULL;

        // �������ڵ�
        TreeNode *head = new TreeNode(pre[0]);

        //������������и��ڵ������ֵ
        int root=0;
        for(int i=0;i<pre.size();++i)
        {
            if(vin[i]==pre[0])
            {
                root=i;
                break;
            }
        }

        //������������������������vector
        vector<int> pre_left,pre_right,vin_left,vin_right;
        for(int i=0;i<root;++i)
        {
            pre_left.push_back(pre[i+1]);
            vin_left.push_back(vin[i]);
        }
        for(int i=root+1;i<pre.size();++i)
        {
            pre_right.push_back(pre[i]);
            vin_right.push_back(vin[i]);
        }

        //���ڵ�����ҽڵ�
        head->left=reConstructBinaryTree(pre_left,vin_left);
        head->right=reConstructBinaryTree(pre_right,vin_right);

        return head;
//     Solution reC;
//     int a[]={2,3,1,5,4,6,7};
//     int b[]={1,3,5,2,6,4,7};
//     vector<int> va(a,a+7);
//     vector<int> vb(b,b+7);
//     TreeNode *head ;
//     head=reC.reConstructBinaryTree(va,vb);
//     reC.PostOrder(head);

}
