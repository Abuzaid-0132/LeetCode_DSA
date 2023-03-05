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
    
    unordered_map<int,int> map;
    
    void preorder(TreeNode* root, int &count) {
        
        if(root == NULL)
            return;
        
        map[root->val]++;
        
        count = max(count, map[root->val]);
        
        preorder(root->left, count);
        
        preorder(root->right, count);
        
    }
    
    
    vector<int> findMode(TreeNode* root) {
        
        vector<int> ans;
        int count = 0;
        
        preorder(root, count);
        
        for(auto it: map)
            if(it.second == count)
                ans.push_back(it.first);
        
        
        return ans;
    }
};