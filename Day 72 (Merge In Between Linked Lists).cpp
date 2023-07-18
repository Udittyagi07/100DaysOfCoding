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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int end=0;
        while(end<=b)
        {
            temp=temp->next;
            end++;
        }
        ListNode* temp2=list2;
        while(temp2->next!=nullptr)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
        int str=0;
        temp=list1;
        while(str<a-1)
        {
            temp=temp->next;
            str++;
        }
        temp->next=list2;
        return list1;
    }
};
