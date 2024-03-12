int getLevelDiff(Node *root)
    {
      if(root==nullptr) return 0;
      
      int sum=getLevelDiff(root->left)+getLevelDiff(root->right);
      int diff=root->data - sum;
      
      return diff;
    }
