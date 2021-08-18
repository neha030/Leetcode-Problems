// https://leetcode.com/problems/swap-nodes-in-pairs/  : Link to the Problem

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
    ListNode* swapPairs(ListNode* head) {
       if(head== NULL || head->next == NULL)
           return head;
        ListNode* ans = swapPairs(head->next->next);
        ListNode* l = head->next;
        head->next=ans;
        l->next=head;
        return l;
    }
};