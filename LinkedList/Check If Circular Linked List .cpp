
bool isCircular(Node *head)
{
   // Your code here
   Node* temp=head;
   while(temp!=NULL)
   {
       if(temp->next==head)
       return 1;
       temp=temp->next;
   }
   return 0;
}
