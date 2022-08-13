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
    void preorderTraverse(TreeNode* root, vector<int> &ds) {
        if(root==NULL)
            return;
        
        ds.push_back(root->val);
        preorderTraverse(root->left,ds);
        preorderTraverse(root->right,ds);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ds;
        preorderTraverse(root,ds);
        return ds;
    }
};