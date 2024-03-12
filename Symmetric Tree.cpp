 bool sol(struct Node* root1 , struct Node* root2)
    {
        if(root1==nullptr && root2==nullptr) return true;
        if(root1==nullptr || root2==nullptr) return false;
        return root1->data == root2->data && sol( root1->left ,  root2->right) && sol( root1->right ,  root2->left);
    }
    bool isSymmetric(struct Node* root)
    {
        if(root==nullptr) return true;
        
        return  sol(root->left, root->right) ;
	  
    }
