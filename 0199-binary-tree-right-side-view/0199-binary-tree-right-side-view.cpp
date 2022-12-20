class Solution {
public:

    void levelOrder(TreeNode* root, vector<int> &result) {

        if(root == NULL)
            return ;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            int size = q.size();

            for(int i=0; i<size; i++) {

                TreeNode* curr = q.front();
                q.pop();

                if(i == size-1)
                    result.push_back(curr->val);

                if(curr->left != NULL)
                    q.push(curr->left);

                if(curr->right != NULL)
                    q.push(curr->right);

            }

        }

    }

    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;

        levelOrder(root,result);

        return result;

    }
};
