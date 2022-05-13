class Solution
{
    public:
    bool detectLoop(Node* head)
    {
       if(head==NULL||head->next==NULL) 
          return false;
       else 
       {
          Node *slow=head,*fast=head->next;
          while(slow!=fast) 
          {
            if(fast==NULL||fast->next==NULL) 
                return false;
            else 
            {
                    slow=slow->next;
                    fast=fast->next->next;
            }
          }
       }
      return true;
    }
};
