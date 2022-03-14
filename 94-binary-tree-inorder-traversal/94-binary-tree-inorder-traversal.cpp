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
    // vector<int> inorderTraversal(TreeNode* root) {
    //     if(!root) return ans;
    //     inorderTraversal(root->left);
    //     ans.push_back(root->val);
    //     inorderTraversal(root->right);
    //     return ans;
    // }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        stack<TreeNode*>s;
        TreeNode *curr=root;
        while(!s.empty() or curr!=NULL){
            while(curr!=NULL){
                s.push(curr);
                curr=curr->left;
            }
            TreeNode* node=s.top();
            s.pop();
            ans.push_back(node->val);
            curr=node;
            curr=curr->right;
        }
        return ans;
    }
    
};