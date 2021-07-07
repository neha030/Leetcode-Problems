//  https://leetcode.com/problems/kth-smallest-element-in-a-bst/  : Link to the Problem

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res;
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return res;
    }
    void helper(TreeNode* root , int&k)
    {
        if(root== NULL)
            return;
        helper(root->left,k);
            k--;
        if(k==0)
            res=root->val;
        helper(root->right,k);
    }
};