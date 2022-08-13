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
    
    void postorderTraverse(TreeNode* root,vector<int> &ds){
        if(root==NULL)
            return;
        postorderTraverse(root->left,ds);
        postorderTraverse(root->right,ds);
        ds.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ds;
        postorderTraverse(root,ds);
        return ds;
    }
};