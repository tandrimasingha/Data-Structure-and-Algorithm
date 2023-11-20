class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int len=0;
       if(head ==NULL || head->next==NULL) return NULL;
       ListNode* temp=head;
       while(temp!=NULL)
       {
           temp=temp->next;
           len++;
       } 
       if(len==n) return head->next;
       int c=len-n-1;
       int i=0;
       temp=head;
       while(i<c)
       {
           temp=temp->next;
           i++;
       }
       temp->next=temp->next->next;
       return head;
    }
};
