class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t=head;
        ListNode* before=NULL;
        int p=1;
        while(p<left)
        {   
            p++;
            before=t;
            t=t->next;
        }
        ListNode* curr=t;
        ListNode* prev=NULL;
        int time=right-left+1;
        while(time--)
        {     
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        t->next=curr;
        if(before==NULL)
        {
            return prev;
        }
        before->next=prev;
return head;
    }
};