class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* x=head;
        int p=0;
        while(x!=NULL)
        {
            p++;
            x=x->next;
        }
        int time=p-n;
         if(time == 0)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* curr=head;
        int q=1;
        while(q<time)
        {
            curr=curr->next;
            q++;
        }
ListNode* temp=curr->next;
curr->next=temp->next;
delete temp;
return head;
    }
};