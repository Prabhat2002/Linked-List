class Solution
{
  public:
    struct Node* reverseList(struct Node *head)
    {
        if(head->next==NULL or head==NULL)
           return head;
        Node *prev=NULL;//previous Node
        Node *cur=head;//Current Node 
        Node *Next;//For next Node
        while(cur!=NULL)
        {
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
        }
        return prev;
    }
};
