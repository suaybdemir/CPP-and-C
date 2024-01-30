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
		Queue(){
			front = rear = NULL;
		}
		void enQueue(int n);
		void deQueue();
		void display();
};

void Queue::enQueue(int n){
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
		rear = newNode;
	}
	cout<<newNode->data<<" Element Inserted "<<endl;
}

void Queue::deQueue(){
	if(front==NULL){
		cout<<"Queue underflow"<<endl;
	}
	Node *tempPtr = front;
	if(front==rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
		cout<<tempPtr->data<<" Element deleted "<<endl;
		free(tempPtr);
	}
}

void Queue::display(){
	if(front==NULL){
		cout<<"Queue underflow"<<endl;
	}
	Node *temp = front;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	free(temp);
}

int main(void)
{
	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	q.deQueue();
	q.display();
	return 0;
}
