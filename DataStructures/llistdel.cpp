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
	
	LinkedList(){
		head = '\0';
		tail = '\0';
	}
	
	void deleteNode(int value)
	{
		bool flag = false;
		Node *current = new Node;
		Node *previous = new Node;
		
		current = head;
		previous = head;
		
		while(current !=NULL)
		{
			if(current->data==value && current==head)
			{
				head = current->next;
				free(current);
				flag = true;
				break;
			}
			else if(current->data==value)
			{
				previous->next = current->next;
				if(current==tail)
				{
					tail = previous;
				}
			free(current);
			flag = true;
			break;
			}
			else{
				previous = current;
				current = current->next;
			}
		}
		if(flag==true)
		{
			cout<<"Element deleted";
		}
		else
		{
			cout<<"Element not found";
		}
		
			
				
		}
		
	}


int main(void)
{
	return 0;
}


