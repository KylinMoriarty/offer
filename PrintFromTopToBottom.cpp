#include<iostream>
#include"test.hpp"
#include<queue>
using namespace std;

vector<int> Solution::PrintFromTopToBottom(TreeNode* root) {
        vector<int >res;
		queue<TreeNode *> q;//¸¨Öú¶ÓÁÐ

		if(root==NULL)
		return res;
		q.push(root);

		while(!q.empty())
		{
			res.push_back(q.front()->val);
			if(q.front()->left!=NULL)
			{
				q.push(q.front()->left);
			}
			if(q.front()->right!=NULL)
			{
				q.push(q.front()->right);
			}
			q.pop();
		}
		return res;
}

//  vector<int> res;
//	TreeNode *root=new TreeNode(1);
//	root->right=new TreeNode(2);
//	root->right->left=new TreeNode(3);
//	res=sol.PrintFromTopToBottom(root);
//	vector<int>::iterator iter;
//	for(iter=res.begin();iter!=res.end();iter++)
//        cout<<*iter<<" ";
//    cout<<endl;
