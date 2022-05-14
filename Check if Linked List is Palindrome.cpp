class Solution
{
  public:
    void reverse(Node* head)
    {
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
        head=prev;
    }
    bool isPalindrome(Node *head)
    {
      if(head==NULL || head->next==NULL)
           return true;
      Node* slow=head;
      Node* fast=head;
      while(fast->next!=NULL && fast->next->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
      }
      reverse(slow->next);
      slow=slow->next;
      while(slow!=NULL)
      {
          if(head->data!=slow->data)
             return false;
          head=head->next;
          slow=slow->next;
      }
      return true;
    }
};
