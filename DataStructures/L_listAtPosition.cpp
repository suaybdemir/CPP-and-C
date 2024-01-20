#include <iostream>

using namespace std;

class Node{
	public:
	int data;
	Node * next;
};


class LinkedList{
	public:
	Node *head,*tail;
	
	 LinkedList() {
		head = '\0';
		tail = '\0';	
	}
	
	void insertAtPosition(int pos,int value)
	{
		Node * prev = new Node;
		Node * current = new Node;
		current = head;
		Node * newNode = new Node;
		newNode->data = value;
		newNode->next = '\0';
		
		if(pos<1)
		{
			cout<<"Position can not be less than 1";
		}
		else if(pos==1)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			for(size_t i = 0 ; i<pos ; i++)
			{
				prev = current;
				current = current->next;
				if(current=='\0')
				{
					cout<<"Invalid position";
					return;
				}
			}
			
			prev->next = newNode;
			newNode->next = current;
		}
	}
};
				


int main(void)
{
	
	return 0;
}
