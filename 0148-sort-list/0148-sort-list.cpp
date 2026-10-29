// **
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  *
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* curr=head;
        vector<int>res;
        while(curr!=nullptr)
        {
            res.push_back(curr->val);
            curr=curr->next;
        }
        sort(res.begin(),res.end());
        int i=0;
        curr=head;
        while(i<res.size())
        {
            curr->val=res[i];
            i++;
            curr=curr->next;
        }
        return head;
    }
};