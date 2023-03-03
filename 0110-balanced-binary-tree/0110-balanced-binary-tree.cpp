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
    
    bool ans = true;
    
    int helper(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int left_subtree = helper(root->left);
        
        int right_subtree = helper(root->right);
        
        if(abs(left_subtree - right_subtree) > 1)
            ans = false;
        
        
        return max(left_subtree, right_subtree) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        
        helper(root);
        return ans;
        
    }
};