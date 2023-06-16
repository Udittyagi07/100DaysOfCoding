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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* temp=head;
        int len=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            len++;
        }
        if(k%len==0)
        {
            return head;
        }
        int position=len-1-(k%len);

        ListNode* newhead=nullptr;
        ListNode* tail=head;
        while(position)
        {
            tail=tail->next;
            position--;
        }
        newhead=tail->next;
        tail->next=nullptr;
        ListNode* temp1=newhead;
        while(temp1->next!=nullptr)
        {
            temp1=temp1->next;
        }
        temp1->next=head;
        return newhead;
    }
};
