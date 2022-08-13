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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q ;
        q.push(root);
        if(root==NULL)
            return result;
        while(!q.empty()){
            int size = q.size();
            vector<int> ds;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                ds.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            result.push_back(ds);
        }
        
        int i = 0;
        int j = result.size()-1;
        
        while(i<j){
            swap(result[i],result[j]);
            i++;
            j--;
        }
        
        return result;
        
    }
};