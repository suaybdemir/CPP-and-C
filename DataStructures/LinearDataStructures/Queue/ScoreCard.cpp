#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class Queue{
	public:
		Node *front,*rear;
		Queue()
		{
			front = rear = NULL;
		}
		void enQueue(int n);
		void display(int jump);
	
};

void Queue::enQueue(int n)
{
	Node *newNode = new Node();
	newNode->data = n;
	newNode->next = NULL;
	if(front==NULL)
	{
		front = rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = rear->next;
	}
}

void Queue::display(int jump)
{
	Node *temp = front;
	int count = 0;
	while(temp!=NULL)
	{
		if(count<jump)
		{
			count++;
		}
		else
		{
			cout<<temp->data<<" ";
		}
		temp = temp->next;
	}
	free(temp);
}

int main(void)
{
	Queue q;
	cout<<"Enter the no. of hurdles:";
	int no;
	cin>>no;
	if(no<=0 || no >100)
	{
		cout<<"Invalid no. of hurdles";
		return 0;
	}
	
	for(int i=0 ; i<no ; i++)
	{
		cout<<"\nEnter the hurdle height "<<i+1<<":";
		int h;
		cin>>h;
		q.enQueue(h);
		
	}
	q.display(no-5);

}
