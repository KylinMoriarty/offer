#include<iostream>
#include"test.hpp"
using namespace std;

void Solution::PreOrder(TreeNode* T){
    if(T!=NULL){
        visit(T);
        PreOrder(T->left);
        PreOrder(T->right);
    }
}
void Solution::InOrder(TreeNode* T){
    if(T!=NULL){
        InOrder(T->left);
        visit(T);
        InOrder(T->right);
    }
}
void Solution::PostOrder(TreeNode* T){
    if(T!=NULL){
        PostOrder(T->left);
        PostOrder(T->right);
        visit(T);
    }
}
void Solution::visit(TreeNode* T){
    cout<<T->val<<endl;

}
