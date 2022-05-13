Node* findIntersection(Node* head1, Node* head2)
{
   Node* x=head1,*y=head2;
   Node* out=NULL,*temp=NULL;
   while(x!=NULL && y!=NULL)
   {
       if(x->data<y->data)
           x=x->next;
       else if(x->data>y->data)
           y=y->next;
       else
       {
          if(out==NULL)
          {
             out=new Node(x->data);
             temp=out;
          }
          else
          {
             temp->next=new Node(x->data);
             temp=temp->next;
          }
          x=x->next;
          y=y->next;
       }
   }
    return out;
}
