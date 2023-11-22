class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(entry!=slow)
                {
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};
