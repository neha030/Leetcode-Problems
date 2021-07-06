//  https://leetcode.com/problems/invert-binary-tree/  :Link to the Problem

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
    TreeNode* invertTree(TreeNode* root) {
       return helper(root);
    }
    
    TreeNode* helper(TreeNode* root)
    {
       if(root == NULL)
          return NULL; 
        TreeNode* left=helper(root->left);
        TreeNode* right=helper(root->right);
        
        root->left=right;
        root->right=left;
        return root;
    }
};