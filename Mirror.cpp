#include<iostream>
#include"test.hpp"
using namespace std;

void Solution::Mirror(TreeNode* pRoot){
       if(pRoot!=NULL){
        TreeNode* p;
        p=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=p;

        Mirror(pRoot->left);
        Mirror(pRoot->right);
       }
}
//            stack<TreeNode*> stk;
//            if(pRoot == NULL)
//            {
//                return;
//            }
//            stk.push(pRoot);
//            // �����ջ��Ϊ�� ˵������Ҫ���²����
//            while(!stk.empty())
//        	{
//                // ��ȡ��ǰ��������ͷ���
//                TreeNode *head = stk.top();
//                stk.pop();
//
//                // ͷ�������������Ϊ�� ����Ҫ����
//                if(head->left || head->right)
//				{
//                    TreeNode *temp;
//                    temp = head->left;
//                    head->left = head->right;
//                    head->right = temp;
//                }
//                // ѹ����ͷ���
//                if(head->left)
//				{
//                    stk.push(head->left);
//                }
//                if(head->right)
//				{
//                    stk.push(head->right);
//                }
//            }
