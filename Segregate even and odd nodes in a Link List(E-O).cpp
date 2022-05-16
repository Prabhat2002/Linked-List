class Solution
{
 public:
    Node* divide(int N, Node *head)
    {
       Node* even=NULL,*evens=NULL;
        Node* odd=NULL,*odds=NULL;
        Node* t1=head,*t2=head;
        while(t1!=NULL)
        {
            if(t1->data%2==0)
            {
              if(even==NULL)
              {
                 even=new Node(t1->data);
                 evens=even;
              }
              else
              {
                 evens->next=new Node(t1->data);
                 evens=evens->next;
              }
            }
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            if(t2->data%2==1)
            {
              if(odd==NULL)
              {
                 odd=new Node(t2->data);
                 odds=odd;
              }
              else
              {
                 odds->next=new Node(t2->data);
                 odds=odds->next;
              }
            }
            t2=t2->next;
        }
        if(evens==NULL)
          return odd;
        else if(odds==NULL)
          return even;
          
        evens->next=odd;
        return even;
    }
};
