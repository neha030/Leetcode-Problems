// https://leetcode.com/problems/path-sum-ii/ : Link to the Problem

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
    vector<vector<int>>result;
    vector<int>temp;
    void dfs(TreeNode* root, int t)
    {
        if(!root)
            return ;
        temp.push_back(root->val);
        if(t==root->val)
        {
            if(!root->left && !root->right)
            {
                result.push_back(temp);
            }
        }
        dfs(root->left,t-root->val);
        dfs(root->right,t-root->val);
        temp.pop_back();
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return result;
    }
};