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
    
    void traversal(TreeNode* root,vector<int> &inorder) {
        
        if(root == NULL)
            return;
        
        traversal(root->left,inorder);
        
        inorder.push_back(root->val);
        
        traversal(root->right,inorder);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> inorder;
        traversal(root,inorder);
        
        int ans = 0;
        
        priority_queue<int> pq;  // max heap.
        
        for(int i=0; i<inorder.size(); i++) {
            
            if(pq.size() < k) 
                pq.push(inorder[i]);
            else{
                
                pq.push(inorder[i]);
                pq.pop();
            }
            
        }
        
        return pq.top();
    }
};