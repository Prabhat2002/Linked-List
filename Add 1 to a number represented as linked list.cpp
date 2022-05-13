class Solution
{
    public:
    void reverse(Node* &head)
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL) 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    Node* addOne(Node *head) 
    {
       if(head==NULL)
           return NULL;
       if(head->next==NULL)
       {
           head->data+=1;
           return head;
       }
       reverse(head);
       int carry;
       if(head->data<9)
       {
           int x=head->data+1;
           head->data=x%10;
           carry=x/10;
       }
       else
       {
           carry=1;
           Node* head1=head;
           while(head1!=NULL)
           {
               int x=head1->data+carry;
               if(x==10)
               {
                  head1->data=0;
                  carry=1;
               }
               else
               {
                   head1->data=x;
                   carry=0;
               }
               head1=head1->next;
           }
       }
       Node* ans=NULL;
       reverse(head);
       if(carry==1)
       {
           ans=new Node(1);
           ans->next=head;
           return ans;
       }
       return head;
    }
};
