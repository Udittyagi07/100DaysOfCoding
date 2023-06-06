/*
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
        ListNode* temp=head;
        int count=0;
        if(head==nullptr)
        {
            return head;
        }
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        if(count==n)
        {
            head = head->next;
            return head;
        }
        n=count-n-1;
        temp=head;
        count=0;
        while(temp!=nullptr)
        {
            if(count==n)
            {
                temp->next=temp->next->next;
            }
            count++;
            temp=temp->next;
        }
        return head;
    }
};
