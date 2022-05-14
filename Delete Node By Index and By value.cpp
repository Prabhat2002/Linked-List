Method : 1

Node* deleteNode(Node *head,int k)
{
    Node* temp=head;
    if(k==1)
    {
        Node* temp=head;
        temp=temp->next;
        head=temp;
        return head;
    }
    while(k>2)
    {
        temp=temp->next;
        k--;        
    }
    temp->next=temp->next->next;
    return head;
}

Method : 2

Node* deleteNode(Node *head,int key)
{
    Node* temp=head;
    if(temp->data==key)
    {
        Node* temp=head;
        temp=temp->next;
        head=temp;
        return head;
    }
    while(temp->next!=NULL)
    {
        if(temp->next->data==key)
        {
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return head;
}
