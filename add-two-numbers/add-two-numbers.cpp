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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0);
        
        ListNode* tmp=ans;
        ListNode* l;
        int f=0;
        while(l1!=NULL||l2!=NULL||f)
        {
            int a=0;
            if(l1!=NULL)
            {
                a+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                a+=l2->val;
                l2=l2->next;
            }
            a+=f;
            f=a/10;
            ListNode* n=new ListNode(a%10);
            tmp->next=n;
            tmp=tmp->next;
        }
        return ans->next;
    }
};