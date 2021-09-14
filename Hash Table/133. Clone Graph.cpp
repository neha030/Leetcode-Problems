// https://leetcode.com/problems/clone-graph/  : Link to the Problem

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>hash;
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        if(hash.find(node)==hash.end())
        {
            hash[node]=new Node(node->val , vector<Node*>{});
            for(Node*  single_neighbor : node->neighbors)
            {
                hash[node]->neighbors.push_back(cloneGraph(single_neighbor));
            }
        }
        return hash[node];
    }
};