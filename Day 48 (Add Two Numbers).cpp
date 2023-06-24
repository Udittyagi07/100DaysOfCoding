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
        ListNode* head=new ListNode(-1);
        ListNode* tail=head;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0)
        {
            int one=(l1==nullptr) ? 0:l1->val;
            int two=(l2==nullptr) ? 0:l2->val;
            
            if(l1!=nullptr)
            {
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                l2=l2->next;
            }
            int sum=one+two+carry;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            tail->next=temp;
            tail=tail->next;
        }
        return head->next;
    }
};
