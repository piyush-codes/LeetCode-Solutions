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
ListNode* reverseList(ListNode* head) {
        ListNode* pre,*cur,*tmp , *mex;
        pre= NULL;
        cur=head;
        while(cur ){
            tmp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=tmp;

        }
    return pre;
    }
   ListNode* reverseKGroup(ListNode* head, int k) {
        // Edge case: if the list is empty or contains only 1 node, return the list as is
        if (!head || !head->next || k == 1) return head;

        // Initialize dummy node to simplify handling of the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;  // This will keep track of the node before the reversed group
        ListNode* cur = head;

        // Calculate the length of the list
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }

        // Reverse in k-sized groups
        while (len >= k) {
            ListNode* groupStart = cur;
            ListNode* groupEnd = cur;
            
            // Move groupEnd to the end of the k-sized group
            for (int i = 1; i < k; i++) {
                groupEnd = groupEnd->next;
            }
            ListNode* nextGroupStart = groupEnd->next;
            groupEnd->next=NULL;
            ListNode* reverseGroupHead = reverseList(groupStart);
            prevGroupEnd->next = reverseGroupHead;
            groupStart->next = nextGroupStart;


            prevGroupEnd=groupStart;
            cur = nextGroupStart;
            len-=k;
        }
        return dummy->next;
    }
};