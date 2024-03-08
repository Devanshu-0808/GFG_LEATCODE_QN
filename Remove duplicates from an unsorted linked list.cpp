 Node * removeDuplicates( Node *head) 
    {
        if(head==nullptr ) return nullptr;
       unordered_set<int>st;
       Node*curr=head ;
       while(curr!=nullptr)
       {
           st.insert({curr->data});
           curr=curr->next;
       }
       
       curr=head;
       vector<int>ans;
       while(curr!=nullptr)
       {
          
           if(st.find(curr->data)!=st.end())
           {
               ans.push_back(curr->data);
               st.erase(curr->data);
           }
           else
           {
               curr->data=-20;
           }
           curr=curr->next;
         
       }
       curr=head;
       for(int i=0 ; i<ans.size() ; i++)
       {
           curr->data=ans[i];
           if(i<ans.size()-1)
           curr=curr->next;
       }
       curr->next=nullptr;
       return head;
       
    }