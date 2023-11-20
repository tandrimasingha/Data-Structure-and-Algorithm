class Solution {
public:
    // ListNode* mid(ListNode* head)
    // {
        
    //     return slow;
    // }
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* tem=new ListNode();
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val<=l2->val)
        {
            tem=l1;
            l1->next=merge(l1->next,l2);

        }
        else
        {
            tem=l2;
            l2->next=merge(l1,l2->next);
        }
        return tem;
    }
    ListNode* sortList(ListNode* head) {
         if(head == NULL || head ->next == NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
       
        ListNode* right=sortList(slow);
        ListNode* left=sortList(head);
        return merge(left,right);
    }
};
