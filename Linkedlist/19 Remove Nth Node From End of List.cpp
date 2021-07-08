// https://leetcode.com/problems/remove-nth-node-from-end-of-list/ : Link to the Problem

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s=head;
         ListNode *ss=head;
         ListNode *f=head;
        if(head->next==NULL)
        {
            return NULL;
        }
        for(int i=1;i<n;i++)
        {
            f=f->next;
        }
        while(f->next!=NULL)
        {
            ss=s;
            s=s->next;
            f=f->next;
        }
        if(s==head)
        {
            head=head->next;
            return head;
        }
        ss->next=s->next;
        return head;
    }
};