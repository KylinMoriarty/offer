#include<iostream>
#include"test.hpp"
using namespace std;

vector<vector<int> >allRes;
vector<int> tmp;

vector<vector<int> > Solution::FindPath(TreeNode* root,int expectNumber){//�������к�Ϊĳһֱ��·��
        if(root) dfsFind(root, expectNumber);
        return allRes;
}

void Solution::dfsFind(TreeNode * node , int target){//������ȱ���
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
/*����һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
*/

