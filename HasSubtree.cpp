#include<iostream>
#include"test.hpp"
using namespace std;


bool Solution::HasSubtree(TreeNode* pRoot1,TreeNode* pRoot2){
        bool result = false;
        if(pRoot2!=NULL&&pRoot1!=NULL){
            if(pRoot1->val==pRoot2->val)   //头结点相同
            {
                result = DoesTree1haveTree2(pRoot1,pRoot2);    //比较子节点
            }
            if(!result)
            {
                result = HasSubtree(pRoot1->left, pRoot2);     //继续找和2头结点相同的结点
            }
            if(!result)
            {
                result=  HasSubtree(pRoot1->right, pRoot2);
            }
        }
     return result;
}

bool Solution::DoesTree1haveTree2(TreeNode* pRoot1, TreeNode* pRoot2)
{

    if(pRoot2==NULL)
        return true;
    if(pRoot1==NULL)
        return false;
    if(pRoot1->val!=pRoot2->val)
        return false;

    return DoesTree1haveTree2(pRoot1->left, pRoot2->left)&&DoesTree1haveTree2(pRoot1->right, pRoot2->right);
}
