#include <iostream>

using namespace std;

class Queue{
	public:
		int front,rear;
		int personQueue[5];
		Queue()
		{
			front = rear = -1;
		}
		void enQueue(int codeNumber);
		void deQueue();
		void display();
		
};

void Queue::enQueue(int codeNumber)
{
	if(rear==4)
	{
		cout<<"Currently, the queue is full"<<endl;
	}
	else if(front==-1 && rear== -1)
	{
		front = rear = 0;
		personQueue[rear] = codeNumber;
	}
	else
	{
		rear++;
		personQueue[rear]=codeNumber;
	}
}

void Queue::deQueue()
{
	int item;
	if(front==-1)
	{
		cout<<"The queue is empty"<<endl;	
	}
	else
	{
		item = personQueue[front];
		if(front == rear)
		{
			front = rear = -1;
			cout<<"The person removed from the Queue: "<<item<<endl;
		}
		else
		{
			front++;
			cout<<"The person removed from the Queue: "<<item<<endl;
		}
		
	}
}

void Queue::display()
{
	if(front==-1)
	{
		cout<<"The queue is empty"<<endl;
		return;
	}
	cout<<"The persons in the queue: ";
	for(size_t i = front; i<=rear ; i++)
	{
		cout<<personQueue[i]<<" ";
	}
	cout<<endl;
}



int main(void)
{
	Queue q;
	int codeNumber;
	int choice;
	
	int count = 1;
	
	do
	{
		
		cout<<"\n1.Add a person to the Queue";
		cout<<"\n2.Remove a person from the Queue";
		cout<<"\n3.Display all the code numbers";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				if(count>5)
				{
					cout<<"Currently, the queue is full"<<endl;
				}
				else
				{
					cout<<"\nEnter the code no. of the person:\n";
					cin>>codeNumber;
					q.enQueue(codeNumber);
					count++;
				}
				break;
				
			case 2:
				q.deQueue();
				break;
				
			case 3:
				q.display();
				break;
				
			case 4:
				return 0;
				
			default:
				cout<<"Invalid option\n";		
		}
	}while(true);
	
	
	return 0;
}
