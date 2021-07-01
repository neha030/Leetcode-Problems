// https://leetcode.com/problems/sum-root-to-leaf-numbers/ : Link to the Problem 

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
    void help(TreeNode*root,int num,int &sum)
    {
        if(root == NULL)
            return;
        num=num*10 + root->val;
        if(root->left== NULL && root->right==NULL)
            sum+=num;
        help(root->left,num,sum);
        help(root->right,num,sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        help(root,0,sum);
        return sum;
    }
};