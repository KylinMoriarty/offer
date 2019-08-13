#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED

#include <vector>
using namespace std;

typedef unsigned long long ULL;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {
    }
};

class Solution{
public:
    int Sum_Solution1(int );
    int Sum_Solution2(int );
    int Sum_Solution3(int );
    int jumpFloor(int ) ;
    ULL stairs(int );
    int Onlyonce(int* ,int );

    TreeNode* reConstructBinaryTree(vector<int> ,vector<int> );
    void PreOrder(TreeNode*);
    void InOrder(TreeNode*);
    void PostOrder(TreeNode*);
    void visit(TreeNode*);
    bool HasSubtree(TreeNode* ,TreeNode*);
    bool DoesTree1haveTree2(TreeNode* , TreeNode* );
    void Mirror(TreeNode *);
    vector<int> PrintFromTopToBottom(TreeNode* );
    bool VerifyPostOrderOfBST(vector<int> );
    bool bst(vector<int> ,int ,int );
    void dfsFind(TreeNode* ,int );

    vector<vector<int> > FindPath(TreeNode* ,int );
    void reOrderArray(vector<int> &);//调整数组顺序将奇数位于偶数前面
    ListNode* FindKthToTail(ListNode* ,unsigned int );
    ListNode* createList_array(int* ,int );
    ListNode* ReverseList1(ListNode* );
    ListNode* ReverseList2(ListNode* );
    ListNode* Merge(ListNode* , ListNode* );
    void PrintList(ListNode *pHead){while(pHead!=NULL){cout<<pHead->val<<" ";pHead=pHead->next;}cout<<endl;}

    RandomListNode* Clone(RandomListNode* );//复杂链表的复制
    vector<int> printMatrix(vector<vector<int> > );//顺时针打印矩阵
    bool IsPopOrder(vector<int> ,vector<int> );//判断压栈出栈顺序
    int MoreThanHalfNum(vector<int> );//超过数组一般长度的数
private:


};

#endif // TEST_HPP_INCLUDED
