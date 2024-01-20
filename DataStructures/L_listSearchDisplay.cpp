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
	
	LinkedList()
	{
		head = '\0';
		tail = '\0';
	}
	
	void search(int value)
	{
		Node * current = head;
		
		while(current!='\0')
		{
			if(current->data==value)
			{
				cout<<"Element"<<value<<" is found";
				return ;
			}
			current = current->next;
		}
		cout<<"Element "<<value<<"not found in the list";
	}
	void displayList()
	{
		Node * current = head;
		while(current != '\0')
		{
			cout<<current->data <<" ";
			current= current->next;
		}
	}
};
		
	

int main(void)
{
	return 0;
}
