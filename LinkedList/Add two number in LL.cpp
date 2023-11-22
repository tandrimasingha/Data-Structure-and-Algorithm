class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        //int sum=0;
        ListNode* dummy=new ListNode();
       ListNode* temp=dummy;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode* tem=new ListNode(sum%10);
            temp->next=tem;
            temp=temp->next;

            

        }
        return dummy->next;
    }
};
