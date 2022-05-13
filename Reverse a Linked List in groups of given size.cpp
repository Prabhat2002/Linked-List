class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node* prev=NULL;
        node* curr=head;
        node* Next;
        int limit=0;
        //swapping first K element
        while(curr!=NULL && limit<k)
        {
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
            limit++;
        }
        //Calling for next k if available else whatever available we will swap and next we will return 
        //IF nothing is found means we have reached the destination.
        if(Next!=NULL)
             head->next=reverse(Next,k);
        return prev;
    }
};
