vector<int> largestValues(Node* root)
    {
       queue<Node*>dq;
       dq.push(root);
       vector<int>ans;
       while(!dq.empty())
       {
           
           int n=dq.size() , maxi=INT_MIN;
           for(int i=0; i<n ; i++)
           {
               root=dq.front();
                if(root->left!=nullptr)dq.push(root->left);
                if(root->right!=nullptr)dq.push(root->right);
                
                maxi=max(maxi , root->data);
                dq.pop();
           }
           ans.push_back(maxi);
          
       }
       return ans;
    }
