// https://leetcode.com/problems/binary-tree-postorder-traversal/ : Link to the Problem

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
    vector<int>ans;
    void dfs(TreeNode* root , vector<int>&ans)
    {
        if(root == NULL)
            return ;
        dfs(root -> left, ans);
        dfs(root -> right, ans);
        ans.push_back(root -> val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
       dfs(root,ans);
        return ans;
    }
};