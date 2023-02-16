 class Solution {
  public:
      vector<int> postorderTraversal(TreeNode* root) {
          
          if(root == NULL)
              return {};
          
          stack<TreeNode*> s1;
          stack<TreeNode*> s2;
          
          vector<int> ans;
          
          s1.push(root);
          
          while(!s1.empty()){
              
              TreeNode* curr = s1.top();
              s1.pop();
              
              if(curr->left != NULL)
                  s1.push(curr->left);
              
              if(curr->right != NULL)
                  s1.push(curr->right);
              
              s2.push(curr);
          }
          
          while(!s2.empty()){
              
              ans.push_back(s2.top()->val);
              s2.pop();
          }
          
          return ans;
      }
  };