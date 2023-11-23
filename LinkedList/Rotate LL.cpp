class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
          ListNode* temp=head;
        ListNode* res=head;
        if(head==NULL || head->next==NULL || k==0) return head;
        int c=1;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        temp->next=head;
         k=k%c;
        int len=c-k-1;
        for(int i=0;i<len;i++)
            res=res->next;
        head=res->next;
        res->next=NULL;
       return head; 
    }
};
