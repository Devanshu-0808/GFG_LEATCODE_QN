vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        int flag = 1;
        q.push(root);
        while (!q.empty()) {
            vector<int> ans1;
            int si = q.size();
            for (int i = 0; i < si; i++) {
                root = q.front();
                q.pop();

             

                if (root->left != nullptr)
                    q.push(root->left);
                if (root->right != nullptr)
                    q.push(root->right);

                ans1.push_back(root->val);
            }
              if(flag==1){
                ans.push_back(ans1);
                flag=0;
              }
              else
              {
                  flag=1;
                  reverse(ans1.begin() , ans1.end());
                   ans.push_back(ans1);
              }
        }

        return ans;
    }