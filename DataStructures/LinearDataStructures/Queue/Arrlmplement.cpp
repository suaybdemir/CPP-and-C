#include <iostream>
#define MAX 10
using namespace std;

class Queue{
	int front,rear;
	int arr[MAX];
	public:
		Queue(){
			front = rear = -1;
		}
		
		
		
		void enQueue(int item);
		void deQueue();
};

void Queue::enQueue(int item)
{
	if(rear==MAX-1)//In case queue is full
	{
		cout<<"\nQueue overflow";
	}
	else if(front==-1 && rear == -1)//In case queue will initialize
	{
		front = rear = 0;
		arr[rear] = item;
		cout<<"\nItem inserted "<<item;
	}
	else
	{
		rear++;
		arr[rear]=item;
		cout<<"\nItem inserted "<<item;
	}
}

void Queue::deQueue(){
	int item;
	if(rear==-1)
	{
		cout<<"\nQueue underflow";
	}
	else
	{
		item = arr[front];
		if(front==rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
			cout<<"\nItem deleted "<<item;
		}
	}
}

int main(void)
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	return 0;
}
