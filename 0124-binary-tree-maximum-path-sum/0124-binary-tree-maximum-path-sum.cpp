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
private:

    int dfs(TreeNode* root, int& maxsum) {

        if(root == NULL) 
            return 0;

        int left_sum = max(0, dfs(root->left,maxsum));
        int right_sum = max(0, dfs(root->right,maxsum));

        maxsum = max(left_sum + right_sum + root->val, maxsum);

        return root->val + max(left_sum, right_sum);
    }

public:

    int maxPathSum(TreeNode* root) {

        int maxsum = INT_MIN;
        dfs(root,maxsum);

        return maxsum;
    }
};