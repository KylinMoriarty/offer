#include<iostream>
#include"test.hpp"
using namespace std;

RandomListNode* Solution::Clone(RandomListNode* pHead){
    RandomListNode* head = new RandomListNode(0);
    RandomListNode* p = pHead;
    while(p)
    {
        head->label=p->label;
        head->next=p->next;
        if(p->random!=NULL)
        head->random=p->random;
        else
        head->random=NULL;

        p=p->next;
        head=head->next;
    }
    return head;
}
