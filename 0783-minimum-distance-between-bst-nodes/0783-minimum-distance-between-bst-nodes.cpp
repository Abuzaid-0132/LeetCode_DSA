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
    
     void inorder(TreeNode* curr, TreeNode*& prev, int& ans){
        
        if (curr == NULL)
             return;
        
        inorder(curr->left, prev, ans);
        
        if (prev != NULL)
            ans = min(curr->val - prev->val, ans);
        
        prev = curr;
        
        inorder(curr->right, prev, ans);
        
    }
    
    int minDiffInBST(TreeNode* root) {
        
          if(root==NULL)
             return 0;
        
        int min=INT_MAX;
        
        TreeNode* prev=NULL;
        
        inorder(root,prev,min);
        
        return min;
        
        
    }
};