
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int> s;
     Node* temp=head;
     Node* prev=NULL;
     while(temp!=NULL)
     {
         if(s.find(temp->data)!=s.end())
         {
             prev->next=temp->next;
         }
         else
            prev=temp;
            
        s.insert(temp->data);
        temp=temp->next;
     }
     return head;
    }
};
