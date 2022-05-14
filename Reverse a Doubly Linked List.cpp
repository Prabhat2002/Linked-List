Node* reverseDLL(Node * head)
{
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    head=temp;
    while(temp!=NULL)
    {
        swap(temp->next,temp->prev);
        temp=temp->next;
    }
    return head;
}
