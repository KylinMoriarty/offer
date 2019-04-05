#include<iostream>
#include"test.hpp"
using namespace std;

void Solution::reOrderArray(vector<int> &array){
        vector<int> odd;
        vector<int> even;
        vector<int>::iterator iter;
        for(iter=array.begin();iter!=array.end();iter++)
        {
            if(*iter%2==0)
                even.push_back(*iter);
            else
                odd.push_back(*iter);
        }
        for(int i=0;i<array.size();++i)
        {
            if(i<odd.size())
            array[i]=odd.at(i);
            else
            array[i]=even.at(i-odd.size());
        }
//        int a[]={3,4,5,6,7,8};
//        vector<int> arr(a,a+6);
//        reo.reOrderArray(arr);
}
ListNode* Solution::FindKthToTail(ListNode* pListHead, unsigned int k) {//倒数第K个数
        if(pListHead == NULL || k == 0){
              return NULL;
        }
        ListNode* pList=pListHead;
        unsigned int i;
        for(i=1;pListHead->next!=NULL;i++)
        {
            pListHead=pListHead->next;
            if(i>=k)
                pList=pList->next;

        }
        if(i<k)
            return NULL;
        else
            return pList;
}
ListNode* Solution::createList_array(int *a, int n){//使用数组构造链表
	ListNode *root = new ListNode(0);
	ListNode *pnode = root;

	for (int i = 0; i < n - 1; ++i){
		root->val = a[i];//当前节点
		root->next = NULL;

		ListNode *p = new ListNode(0);//下一个结点
		p->val = a[i + 1];
		p->next = NULL;

		root->next = p;// 连接 当前节点 与 下一个结点
		root = root->next;
	}
	root->next = NULL;//这一句 最重要！！
	return pnode;
//    int a[] = { 1, 3, 5, 7, 9 };
//	int n = sizeof(a) / sizeof(a[0]);
//	ListNode *pnode = sol.createList_array(a, n);
//    cout<<sol.FindKthToTail(pnode,2)->val<<endl;
}
ListNode* Solution::ReverseList1(ListNode* pHead){
    ListNode *pre=NULL;
	ListNode *p=NULL;
    for(int i=1;pHead!=NULL;i++)
    {
        p=pHead->next;	//保存剩余链表
		pHead->next=pre;//断开剩余链表头结点pHead，指向pre
		pre=pHead;	//pre更新
		pHead=p;	//head更新
    }
    return pre;
}
ListNode* Solution::ReverseList2(ListNode* pHead){
    if(pHead==NULL)
		return NULL;
	ListNode *p=pHead->next;
	ListNode *newHead=pHead;
	while(p!=NULL){			//将p结点移到链表最前方
		pHead->next=p->next;//头结点指向p的下一个结点
		p->next=newHead;	//p插入链表最前方
		newHead=p;		//链表新头结点更新为p
		p=pHead->next;//处理下一个结点，该结点位于头结点后
	}
	return newHead;
}
ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2){
    ListNode *pHead = new ListNode(0);
    ListNode *p = pHead;
    while(pHead1 != NULL && pHead2 != NULL)
    {
        if(pHead1->val < pHead2->val)
        {
            p->next = pHead1;
            pHead1 = pHead1->next;
        }
        else
        {
            p->next = pHead2;
            pHead2 = pHead2->next;
        }
        p = p->next;
    }
    if(pHead1 != NULL)
    {
        p->next = pHead1;
    }
    if(pHead2 != NULL)
    {
        p->next = pHead2;
    }
    return pHead->next;
}

