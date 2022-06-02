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
    // vector<int>ans;
    // vector<int> preorderTraversal(TreeNode* root) {
    //     if(!root) return ans;
    //     ans.push_back(root->val);
    //     preorderTraversal(root->left);
    //     preorderTraversal(root->right);
    //     return ans;
    // }
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*>st;
        vector<int>ans;
        st.push(root);
        while(!st.empty()){
            TreeNode *node=st.top();
            st.pop();
            ans.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return ans;
    }
    
};