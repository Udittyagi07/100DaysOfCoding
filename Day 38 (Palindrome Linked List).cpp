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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return 1;
        }
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size()/2;i++)
        {
            if(arr[i]!=arr[arr.size()-1-i])
            {
                return 0;
            }
        }
        return 1;
    }
};
