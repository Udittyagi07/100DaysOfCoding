/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    Node* temp= head;
	if(head==NULL)
	{
		return head;
	}
	if(pos==0)
	{
		head=temp->next;
		delete temp;
		return head;
	}
	int index=0;
	while(temp!=NULL && index<pos-1)
	{
		temp=temp->next;
		index++;
	}
	if(temp==NULL || temp->next==NULL)
	{
		return head;
	}
	else
	{
		Node* curr=temp->next; 
		temp->next=curr->next;
		delete curr;
		return head;
	}
}
