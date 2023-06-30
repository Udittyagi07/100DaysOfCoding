#include<map>
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
    void insertTail(Node*& head,Node*& tail,int data)
    {
        Node* temp=new Node(data);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        Node* copyhead=NULL;
        Node* copytail=NULL;
        Node* temp=head;
        while(temp!=NULL)
        {
            insertTail(copyhead,copytail,temp->val);
            temp=temp->next; 
        }

        unordered_map<Node*, Node*> rel;
        Node* original=head;
        Node* copy=copyhead;
        while(original!=NULL)
        {
            rel[original]=copy;
            original=original->next;
            copy=copy->next;
        }
        original=head;
        copy=copyhead;
        while(original!=NULL)
        {
            copy->random=rel[original->random];
            original=original->next;
            copy=copy->next;
        }
        return copyhead;
    }
};
