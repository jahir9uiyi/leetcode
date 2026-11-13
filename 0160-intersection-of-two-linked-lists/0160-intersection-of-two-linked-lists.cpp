/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* slow=head1;
        ListNode * fast=head2;
        while(slow!=fast)
        {
            if(slow==NULL) slow=head2;

            else slow=slow->next;
            if(fast==NULL) fast=head1;
            else fast=fast->next;
        }
return slow;

    }
};