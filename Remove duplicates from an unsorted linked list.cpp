class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        Node *curr=new Node(head->data);
        Node *node=curr;
        set<int>s;
        s.insert(head->data);
        while(head)
        {
            if(s.find(head->data)==s.end()){
                curr->next=new Node(head->data);
                s.insert(head->data);
                curr=curr->next;
            }
            else 
               head=head->next;
        }
        return node;
    }
};
