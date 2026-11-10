/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
                if(!head || !head->next) return;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while (curr != NULL) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        ListNode* h1 = head;
        ListNode* h2 = prev;
        // ListNode* dummy = new ListNode(-1);
        // ListNode* temp = dummy;
        while (h2 != NULL) {
            ListNode* nex1=h1->next;
            ListNode* nex2=h2->next;

            h1->next=h2;
            h2->next=nex1;
            h1=nex1;
            h2=nex2;
        }
        // ListNode* ans = dummy->next;
        // ListNode* old=head;
        // while(old!=NULL && ans!=NULL)
        // {
        //    old->val = ans->val;
        //     old = old->next;
        //     ans = ans->next; 
        // }
        
    }
};