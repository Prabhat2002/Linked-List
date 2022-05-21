class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
       if(x==1)
       {
           head=head->next;
           return head;
       }
       int i=1;
       Node* temp=head;
       while(temp!=NULL)
       {
           if(i==x)
           {
               Node* prev=temp->prev;
               Node* next=temp->next;
               prev->next=next;
           }
           i++;
           temp=temp->next;
       }
       return head;
    }
};
