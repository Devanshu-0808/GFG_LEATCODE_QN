Node* pairWiseSwap(struct Node* head) 
    {
        if(head==nullptr ) return nullptr;
        if(head->next==nullptr ) return head;
        Node*curr1=head;
        Node*curr2=head->next;
        Node*temp=nullptr;
        head=head->next;
        
        if(curr2->next==nullptr)
        {
            curr2->next=curr1;
            curr1->next=nullptr;
            return curr2;
        }
        while(curr2->next!=nullptr)
        {
            
            temp=curr2->next;
            if(temp->next!=nullptr)
            curr1->next=temp->next;
            else
            {
                curr1->next=temp;
                curr2->next=curr1;
                break;
            }
            curr2->next=curr1;
            
            curr1=temp;
            curr2=curr1->next;
              
        }
        
        if(temp->next!=nullptr)
        {
        temp->next=nullptr;
    curr2->next = temp;
    
        }
        return head;
    }