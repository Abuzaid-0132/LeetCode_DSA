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
    
    TreeNode* helper(vector<int> &vec, int start, int end) {
        
        if(start > end) 
            return NULL;
        
        int mid = start + (end - start) / 2;
        
        TreeNode* root = new TreeNode(vec[mid]);
        
        root->left = helper(vec, start, mid-1);
        
        root->right = helper(vec, mid+1, end);
        
        return root;
    }
    
    void inorder(TreeNode* root, vector<int> &vec) {
        
        if(root == NULL)
            return;
        
        inorder(root->left, vec);
        
        vec.push_back(root->val);
        
        inorder(root->right, vec);
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> vec;
        
        inorder(root, vec);
        
        return helper(vec, 0, vec.size()-1);
        
    }
};