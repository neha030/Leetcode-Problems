//  https://leetcode.com/problems/sort-list/  : Link to the Problem 

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
    ListNode* sortList(ListNode* head) {
       if(head == NULL or head->next == NULL)
    {
        return head;
    }
    
    //rec case
    ListNode * mid = midpt(head);
    
    //Break at the mid
    ListNode * a = head;
    ListNode * b = mid->next;
    mid->next = NULL;
    
    //Recursive Sort
    a = sortList(a);
    b = sortList(b);
    
    //Merge
    return merge(a, b);
        
    }
    
    ListNode* midpt(ListNode *head)
    {
        ListNode * slow = head;
        ListNode * fast = head->next;

while(fast!=NULL and fast->next!=NULL){
	slow = slow->next;
	fast = fast->next->next;
}
return slow;
    }
    
    ListNode* merge(ListNode *a, ListNode *b)
    {
        if(a==NULL)	return b;

if(b==NULL) return a;
ListNode * c;
        if(a->val<b->val)
        {
            c=a;
            c->next=merge(a->next,b);
        }
        else
        {
         c=b;
            c->next=merge(a,b->next);   
        }
        return c;
    }
};