// https://leetcode.com/problems/reverse-linked-list/  : Link to the problem

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
    ListNode* reverseList(ListNode* head) {
       ListNode *newnode=NULL;
        ListNode *pre=NULL;
        while(head!=NULL)
        {
            newnode=head->next;
            head->next=pre;
            pre=head;
            head=newnode;
        }
        return pre;
    }
};