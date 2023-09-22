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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow;
        ListNode *fast;
        slow=head;
        fast=head;
        int cnt=0;
        if(n==1 && !head->next)
            return NULL;
        // while(cnt!=n)
        // {
        //     fast=fast->next;
        //     cnt++;

        // }
        while(fast && slow && fast->next)
        {
            if(cnt>=n)
            slow=slow->next;
            fast=fast->next;
            cnt++;
        }
        if(cnt==n-1)
        {
            return head->next;
        }
        if(slow->next && slow->next->next)
        slow->next=slow->next->next;
        else
            slow->next=NULL;
        return head;

    }
};