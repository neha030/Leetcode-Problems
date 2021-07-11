// https://leetcode.com/problems/merge-two-sorted-lists/ : Link to the Problem

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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(!a)
            return b;
        if(!b)
            return a;
        ListNode*ans;
        if(a->val <= b->val){
            ans=a;
            ans->next=mergeTwoLists(a->next,b);
        }else{
            ans=b;
            ans->next=mergeTwoLists(a,b->next);
        }
        return ans;
    }
};