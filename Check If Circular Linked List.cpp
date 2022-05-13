bool isCircular(Node *head)
{
     if(head==NULL)
      return true;
     Node*temp=head;
     while(temp!=NULL)
     {
        if(temp->next==head)
          return true;
        temp=temp->next;
     }
   return false;
}
