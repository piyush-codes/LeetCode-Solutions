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
        ListNode* in=new ListNode();
        in->next=head;
        ListNode* prev=in;
        ListNode* temp=in;
        int k=1;
        if(head==NULL)
            return NULL;
        while(temp->next!=NULL)
        {
           
            temp=temp->next;
            if(k>n)
                prev=prev->next;
            k++;
        }
        //ListNode* 
        prev->next=prev->next->next;
        return in->next;
    }
};