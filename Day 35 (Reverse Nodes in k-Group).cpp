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
int length(ListNode* head)
{
    ListNode* temporary=head;
    int len=0;
    while(temporary!=NULL)
    {
        len++;
        temporary=temporary->next;
    }
    return len;
}
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        if(length(head)<k)
        {
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr= head;
        ListNode* next=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL)
        {
            head->next=reverseKGroup(curr,k); 
        }
        return prev;
    }
};
