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
    ListNode* mid(ListNode* head)
    {
        int count=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;
        int i=1;
        while(i<count)
        {
            temp=temp->next;
            i++;
        }
        return temp;
    }

    ListNode* merge(ListNode* left,ListNode* right)
    {
        if(left==nullptr)
        {
            return right;
        }
        if(right==nullptr)
        {
            return left;
        }
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(left!=nullptr && right!=nullptr)
        {
            if(left->val < right->val)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        if(left!=nullptr)
        {
            temp->next=left;
        }
        if(right!=nullptr)
        {
            temp->next=right;
        }
        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
    if(head==nullptr || head->next==nullptr)
    {
        return head;    
    }
    ListNode* left=head;
    ListNode* right=mid(head)->next;
    mid(head)->next=nullptr;
    
    left=sortList(left);
    right=sortList(right);

    ListNode* ans=merge(left,right);
    return ans;
    }
};
