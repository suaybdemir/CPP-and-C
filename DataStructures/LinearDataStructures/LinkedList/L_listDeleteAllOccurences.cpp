#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
};

class LinkedList{
	public:
		Node *head,*tail;
		LinkedList(){
			head = NULL;
			tail = NULL;
		}
		void append(int value);
		void deleteAllOccurrences(int key);
		void display();
};

void LinkedList :: append(int value)
{
	Node * newNode = new Node;
	newNode->data = value;
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

void LinkedList::deleteAllOccurrences(int key)
{
    Node *current = head;
    Node *previous = head;

    while (current != NULL)
    {
        if (current->data == key && current == head)
        {
            head = current->next;
            previous = previous->next;
            free(current);
            current = previous;
        }
        else if (current->data == key)
        {
            previous->next = current->next;
            if (current == tail)
            {
                tail = previous;
            }
            free(current);
            current = previous->next;
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
}


void LinkedList :: display()
{
	Node *temp = head;
	cout<<"\nThe list after deletion: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(void)
{
	cout<<"\nEnter the size of the list: ";
	int N,value;
	LinkedList lst;
	cin>>N;
	for(int i = 0; i<N ; i++)
	{
		cin>>value;
		lst.append(value);
	}
	cout<<"\nEnter the element to be deleted: ";
	int delValue;
	cin>>delValue;
	
	lst.deleteAllOccurrences(delValue);
	lst.display();
}
