//  https://leetcode.com/problems/binary-search-tree-iterator/ : Link to the Problem

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
class BSTIterator {
public:
    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
        push_left_nodes(root); 
    }
     void push_left_nodes(TreeNode* node)
    {
        while(node)
        {
            s.push(node);
            node = node->left;
        }
    }
    
    int next() {
        TreeNode* left = s.top();
        s.pop();
        push_left_nodes(left->right);
        return left->val;
    }
    
    bool hasNext() {
         return !s.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */