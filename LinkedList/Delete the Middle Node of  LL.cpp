class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * s = head, *f = head, *prev = NULL;

        while(f!= NULL && f->next != NULL){
            prev = s;
            f = f->next -> next;
            s = s -> next; 
        }

        prev->next = s->next;
        return head;
    }
};
