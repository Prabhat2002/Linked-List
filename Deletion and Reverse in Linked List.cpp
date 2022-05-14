void deleteNode(struct Node **head, int key)
{
     Node* curr= *head;
     while (curr->next != *head) 
     {
        if (curr->next->data == key)
        {
            curr->next=curr->next->next;
            break;
        }
        curr=curr->next;
     }
}
void reverse(struct Node** head)
{
    Node *curr=*head;
    Node *temp;
    Node *next=curr->next;
   while(next!=*head){
      
       temp=next->next;
       next->next=curr;
       curr=next;
       next=temp;
   }
   next->next=curr;
   *head=curr;
}
