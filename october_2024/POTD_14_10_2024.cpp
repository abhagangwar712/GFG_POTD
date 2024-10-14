//count nodes in a singly linked list

int getCount(struct Node* head) {
        
        if(head==NULL) return 0;
        else if(head->next==NULL) return 1;
        else{
            int count=0;
            struct Node *temp=head;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
            return count;
        }
    }
