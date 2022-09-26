class Solution
{
  public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while(current != NULL) 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        head=reverse(head);
        ListNode* temp=head;
        if(n<=2)
        {
            if(n==1)
               head=head->next;
            else
                head->next=head->next->next;
            
            head=reverse(head);
            return head;
        }
        while(n>2 && temp!=NULL)
        {
            temp=temp->next;
            n--;
        }
        cout<<temp->val;
        if(temp==NULL)
            return NULL;
        temp->next=temp->next->next;
        return reverse(head);
    }
};
