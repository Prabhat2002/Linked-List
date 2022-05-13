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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        reverse(first);
        reverse(second);
        int carry=0;
        Node* ans=NULL,*temp=NULL;
        while(first!=NULL||second!=NULL||carry)
        {
            int sum=carry;
            if(first!=NULL)
            {
                sum=sum+first->data;
                first=first->next;
            }
            if(second!=NULL)
            {
                sum=sum+second->data;
                second=second->next;
            }
            
            if(ans==NULL)
            {
                ans=new Node(sum%10);
                carry=sum/10;
                temp=ans;
            }
            else
            {
                temp->next=new Node(sum%10);
                carry=sum/10;
                temp=temp->next;
            }
        }
        reverse(ans);
        return ans;
    }
};
