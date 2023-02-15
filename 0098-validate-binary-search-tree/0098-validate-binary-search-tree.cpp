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
    bool valid(TreeNode* root, long MinVal, long MaxVal) {
        
        if(root == NULL)
            return true;
        
        if(root->val >= MaxVal || root->val <= MinVal)
            return false;
        
        return valid(root->left, MinVal, root->val) && valid(root->right, root->val, MaxVal);
        
    }
    
    bool isValidBST(TreeNode* root) {
        
        return valid(root, LONG_MIN, LONG_MAX);
    }
};