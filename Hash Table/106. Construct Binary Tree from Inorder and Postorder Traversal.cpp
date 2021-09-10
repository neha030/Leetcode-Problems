// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/ : Link to the Problem

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
    int i=0;
    unordered_map<int,int>mp;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       i=postorder.size()-1;
        for(int i=0;i<inorder.size();i++)
        {
           mp[inorder[i]]=i;
        }
        return build(inorder,postorder,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>&ino, vector<int>&pos, int s, int e){
    if(s > e) return nullptr;
            
    int j = mp[pos[i]];
    
    TreeNode* root = new TreeNode(pos[i]);
    i--;
    
    root->right = build(ino, pos, j+1, e);
    root->left  = build(ino, pos, s, j-1);
    
    return root;
}
};