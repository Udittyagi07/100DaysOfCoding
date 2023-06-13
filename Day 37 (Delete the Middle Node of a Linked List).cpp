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
    ListNode* deleteMiddle(ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    int length=0;
    ListNode* temp =head;
    while(temp!=NULL)
    {
        temp=temp->next;
        length++;
    }
    length=(length)/2 -1;
    temp=head;
    for(int i=0;i<length;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    }
};
