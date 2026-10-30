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
 #include <vector>
 #include<algorithm>
        void Inorder(TreeNode* root, vector<int> &v1){
            if(root==nullptr) return;
            v1.push_back(root->val);
            Inorder(root->left,v1);
            Inorder(root->right,v1);
        return ;
        }
class Solution {
public:
    
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v1;
        Inorder(root,v1);
        sort(v1.begin(), v1.end());
        
        int f=0,j;

        for(int i=0;i<v1.size();i++){
            if(v1[0]<v1[i]){
                f=1;
                j=i;
                break;
            } 
        }
        if(f==1) return v1[j];
        return -1;
    }
};