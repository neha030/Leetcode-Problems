// https://leetcode.com/problems/palindrome-linked-list/  : Link to the problem

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
    bool isPalindrome(ListNode* head) {
       if(head==NULL|| head->next==NULL)
           return true;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reversal(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        }
    ListNode* reversal(ListNode* head)
    {
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