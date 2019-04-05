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

class Solution{
public:
    int Sum_Solution1(int );
    int Sum_Solution2(int );
    int Sum_Solution3(int );
    int jumpFloor(int ) ;
    ULL stairs(int );

    TreeNode* reConstructBinaryTree(vector<int> ,vector<int> );
    void PreOrder(TreeNode*);
    void InOrder(TreeNode*);
    void PostOrder(TreeNode*);
    void visit(TreeNode*);

    void reOrderArray(vector<int> &);
    ListNode* FindKthToTail(ListNode* ,unsigned int );
    ListNode* createList_array(int* ,int );
    ListNode* ReverseList1(ListNode* );
    ListNode* ReverseList2(ListNode* );
    ListNode* Merge(ListNode* , ListNode* );
    void PrintList(ListNode *pHead){while(pHead!=NULL){cout<<pHead->val<<" ";pHead=pHead->next;}cout<<endl;}

private:


};

#endif // TEST_HPP_INCLUDED
