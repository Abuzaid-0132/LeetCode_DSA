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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        if(root->left == NULL && root->right == NULL) {
            
            ans.push_back({root->val});
            return ans;
        }
            
        queue<TreeNode*> q;
        q.push(root);
        
        int level = 0;
        
         while(q.empty() == false) {
             
             vector<int> vec;
             
             int size = q.size();
             
             for(int i=0; i<size; i++) {
                 
                 TreeNode* curr = q.front();
                 q.pop();
                 
                 vec.push_back(curr->val);
                 
                 if(curr->left)
                     q.push(curr->left);
                 
                 if(curr->right)
                     q.push(curr->right);
                 
             }
             
             if(level % 2 == 0)
                ans.push_back(vec);
             
             else{
                 
                 reverse(vec.begin(), vec.end());
                 ans.push_back(vec);
             }
             
             level++;
         }
        
        return ans;
    }
};