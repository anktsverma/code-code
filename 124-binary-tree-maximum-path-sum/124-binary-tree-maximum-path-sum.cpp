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
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        solve(root,maxSum);
        return maxSum;
    }
    
    int solve(TreeNode* root,int &maxSum){
        if(!root) return 0;
        int l=max(0,solve(root->left,maxSum));
        int r=max(0,solve(root->right,maxSum));
        maxSum=max(maxSum,l+r+root->val);
        return root->val+max(l,r);
    }
};