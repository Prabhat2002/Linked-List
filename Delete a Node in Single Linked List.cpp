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

Node* deleteNode(Node *head,int k)
{
    int n=size(head);
    Node* temp=head;
    if(k==n)
    {
        while(temp->next->next!=NULL)
           temp=temp->next;
        temp->next=NULL;
        return head;
    }
    if(k==1)
    {
        Node* temp=head;
        temp=temp->next;
        head=temp;
        return head;
    }
    Node* tmp=head;
    while(k>2)
    {
        if(k==1)
           temp=temp->next;
        else
        {
            temp=temp->next;
            tmp=tmp->next;
        }
        k--;        
    }
    temp->next=tmp->next->next;
    return head;
}
