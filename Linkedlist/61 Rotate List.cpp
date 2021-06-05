//  https://leetcode.com/problems/rotate-list/      : link to the problem

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
    ListNode* rotateRight(ListNode* head, int k) {
      // edge case 
        if(!head || !head->next || k==0)
        {
            return head;
        }
        //finding the length;
        ListNode *cur=head;
        int len=1;
        while(cur->next && ++len)
        {
            cur=cur->next;
        }
        // go till that node
        cur->next=head;
        k=k%len;
        k=len-k;
        while(k--)
        {
            cur=cur->next;
        }
        
        // make the node head and break the connection;
        head=cur->next;
        cur->next=NULL;
        
        return head;
    }
};