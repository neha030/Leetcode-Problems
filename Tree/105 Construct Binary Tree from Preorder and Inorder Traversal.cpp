// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/  : Link to the Problem

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
    unordered_map<int,int> in;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      for(int i=0;i<inorder.size();i++)
      {
          in.insert({inorder[i],i});
      }
        return construct(preorder,inorder,0,inorder.size()-1,0);
    }
   TreeNode* construct(vector<int>& preorder, vector<int>& inorder,int i,int j,int pre)
   {
       if(i>j)
           return nullptr;
       TreeNode *root=new  TreeNode(preorder[pre]);
       int index=in[preorder[pre]];
       root->left=construct(preorder,inorder,i,index-1,pre+1); 
        root->right=construct(preorder,inorder,index+1,j,pre+ index-i+1);
       return root;
       
   }
};