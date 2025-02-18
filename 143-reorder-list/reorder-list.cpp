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
        ListNode* slow,*tmp,*fast,*prev,*mid;
        slow=head;
        fast=head;

        // Get the middle
        while(fast && fast->next)
        {
            slow=slow->next;
        
            fast=fast->next->next;
        }
        mid=slow->next;
        slow->next=NULL;
        prev=NULL;
        // reverse the second half

        while(mid)
        {
            tmp=mid->next;
            mid->next=prev;
            prev=mid;
            mid=tmp;
        }

        //merge two halfs

        while(head && prev)
        {
          ListNode* firstNext=head->next;     
             ListNode* reverseNext=prev->next;
             head->next = prev;
             prev->next=firstNext;
             head=firstNext;
             prev=reverseNext;
        }
    }
};