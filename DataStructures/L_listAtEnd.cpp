#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class Linkedlist{
	public:
		Node *head,*tail;
		LinkedList()
		{
			head = NULL;
			tail = NULL;
		}
		voud insertAtEnd(int value)
		{
			Node *newNode = new Node;
			newNode->data= value;
			newNode->next = NULL;
			if(head==NULL)
			{
				head = newNode;
				tail = newNode;
			}
			else
			{
				tail->next = newNode;
				tail = tail->next;
			}
		}
};

int main(void)
{
	return 0;
}
