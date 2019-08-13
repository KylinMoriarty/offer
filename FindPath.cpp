#include<iostream>
#include"test.hpp"
using namespace std;

vector<vector<int> >allRes;
vector<int> tmp;

vector<vector<int> > Solution::FindPath(TreeNode* root,int expectNumber){//二叉树中和为某一直的路径
        if(root) dfsFind(root, expectNumber);
        return allRes;
}

void Solution::dfsFind(TreeNode * node , int target){//深度优先遍历
        tmp.push_back(node->val);

        if(!node->left && !node->right)
        {
            if(target - node->val == 0)
                allRes.push_back(tmp);
        }
        else
        {
            if(node->left) dfsFind(node->left, target - node->val);
            if(node->right) dfsFind(node->right, target - node->val);
        }

        if(!tmp.empty())
            tmp.pop_back();
}
/*输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
(注意: 在返回值的list中，数组长度大的数组靠前)
*/

