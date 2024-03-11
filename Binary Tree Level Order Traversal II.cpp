 vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>ans1;
            int si=q.size();
            for(int i=0 ; i<si ; i++)
            {
                root=q.front();
                q.pop();
                if(root->left!=nullptr) q.push(root->left);
                if(root->right!=nullptr) q.push(root->right);
                ans1.push_back(root->val);
            }
            
            ans.push_back(ans1);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }