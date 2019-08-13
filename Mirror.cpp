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
//            // 如果堆栈不为空 说明还需要往下层遍历
//            while(!stk.empty())
//        	{
//                // 获取当前遍历子树头结点
//                TreeNode *head = stk.top();
//                stk.pop();
//
//                // 头结点任意子树不为空 就需要交换
//                if(head->left || head->right)
//				{
//                    TreeNode *temp;
//                    temp = head->left;
//                    head->left = head->right;
//                    head->right = temp;
//                }
//                // 压入新头结点
//                if(head->left)
//				{
//                    stk.push(head->left);
//                }
//                if(head->right)
//				{
//                    stk.push(head->right);
//                }
//            }
