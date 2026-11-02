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

 void vec(TreeNode* root, vector<int> &v1){
    if(root==nullptr) return;
    vec(root->left,v1);
    v1.push_back(root->val);
    vec(root->right,v1);
    return;
 }
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v1;
        if(root == nullptr){
            return v1;
        }
        vec(root,v1);
        return v1;
    }
    
};