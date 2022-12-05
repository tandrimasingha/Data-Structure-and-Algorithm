class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* dummy=NULL;
        ListNode* temp=head;
         ListNode* temp1=head;
        while(temp!=NULL)
        {
            temp1=temp1->next;
            temp->next=dummy;
            dummy=temp; // dummy point karega temp p
            temp=temp1;
            
        }
        return dummy;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};
