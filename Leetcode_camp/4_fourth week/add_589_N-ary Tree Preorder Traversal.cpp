/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void recur(Node* root, vector<int> &answer){
        if(!root){
            return;
        }
        answer.push_back(root->val);
        for(int i=0; i<root->children.size();i++){
            recur(root->children[i],answer);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> answer;
        recur(root,answer);
        return answer;
    }    
};