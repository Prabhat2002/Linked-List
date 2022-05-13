class Solution
{
    public:
    int size(Node* temp)
    {
        int n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        return n;
    }
    Node* rotate(Node* head, int k)
    {
        int n=size(head);
        if(k%n==0)
          return head;
        Node* temp=head;
        while(temp->next!=NULL)
           temp=temp->next;
        Node* temp1=NULL,*temp2=NULL;
        k=k%n;
        while(k>0)
        {
           if(temp1==NULL)
           {
             temp1=new Node(head->data);
             temp2=temp1;
           }
           else
           {
             temp2->next=new Node(head->data);
             temp2=temp2->next;
           }
           head=head->next;
           k--;
        }
        temp->next=temp1;
        return head;
    }
};
