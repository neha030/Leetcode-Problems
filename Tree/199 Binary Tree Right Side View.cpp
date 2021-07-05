// https://leetcode.com/problems/binary-tree-right-side-view/ : Link to the Problem

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        recurFind(root,res,1);
        return res;
    }
     void recurFind(TreeNode* root, vector<int> &res, int level)
     {
        if
            (root== NULL)
            return;
         if(res.size()<level)
         {
             res.push_back(root->val);
         }
             
         recurFind(root->right,res,level+1);
          recurFind(root->left,res,level+1);
     }
};