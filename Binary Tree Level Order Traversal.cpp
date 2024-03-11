vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        q.push(root);
        while (!q.empty()) {
             int si=q.size();
               vector<int> ans1;
            for (int i = 0; i < si; i++) {
                root=q.front();
                if (root->left != nullptr)
                    q.push(root->left);
                if (root->right != nullptr)
                    q.push(root->right);

                    ans1.push_back(root->val);
                    q.pop();
            }
            ans.push_back(ans1);
            
        }
        return ans;
    }