#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class LinkedList{
	public:
		Node *head;
		Node *tail;
		LinkedList()
		{
			head = NULL;
			tail = NULL;
		}
		
		void append(int);
		void display();
		int countTheKey(int);
};

void LinkedList::append(int value)
{
	Node *newNode = new Node;
	newNode -> data = value;
	newNode -> next = NULL;
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

void LinkedList::display()
{
	Node *current = head;
	while(current!=NULL)
	{
		cout<<current->data<<" ";
		current = current ->next;
	}
} 

int LinkedList :: countTheKey(int key)
{
	Node *temp = head;
	int count = 0;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			count++;
		}
		temp = temp->next;
	}
	return count;
}

int main()
{
	cout<<"\nEnter the sie of the list: ";
	int N,value,key;
	LinkedList lst;
	cin>>N;
	if(N>0)
	{
		for(int i=0; i<N ; i++)
		{
			cin>>value;
			lst.append(value);
		}
		cout<<"\n";
		lst.display();
		cout<<"\nEnter the number: ";
		cin>>key;
		
		int n = lst.countTheKey(key);	
		cout<<key<<" occurs "<<n<<" times.";	
	}
	else
	{
		cout<<"\nInvalid Input";
		
	}
	
	return 0;
}
