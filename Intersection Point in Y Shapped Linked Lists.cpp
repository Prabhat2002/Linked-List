int intersectPoint(Node* head1, Node* head2)
{
    unordered_map<Node*,int>mp;
    while(head1!=NULL)
    {
       mp.insert({head1,head1->data});
       head1=head1->next;
    }
    while(head2!=NULL)
    {
       auto it=mp.find(head2);
       if(it!=mp.end())
           return it->second;
       head2=head2->next;
    }
   return -1;
}
