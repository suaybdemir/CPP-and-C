#include <iostream>
#include  <string.h>
#include <cstdlib>

using namespace std;

class Stack{
	int top;
	public:
		char box[5][10];
		Stack()
		{
			top = -1;
		}
		void push(char bkNo[]);
		void pop();
		void display();
};

void Stack::push(char bkNo[])
{
	if(top>=4)
	{
		cout<<"\nThe box is full\n";
		return;
	}
	strcpy(box[++top],bkNo);
}

void Stack::pop()
{
	if(top==-1)
	{
		cout<<"\nThe box is empty";
		return;
	}
	cout<<"\nThe book is deleted from the box:"<<box[top--];
}
	
void Stack::display()
{
	if(top==-1)
	{
		cout<<"\nThe box is empty";
		return ;
	}
	else
	{
		cout<<"\nThe books in the box:";
		for(int i = top ; i>=0 ; i--)
		{
			cout<<box[i]<<" ";
		}
	}
}

int main(void)
{
	Stack stk;
	char bkNo[10];
	int choice;
	do
	{
		cout<<"\n1. Insert a book in the box";
		cout<<"\n2. Delete a book from the box";
		cout<<"\n3. Display book box";
		cout<<"\n4. Exit";
		
		cout<<"\nEnter your choice: ";
		cin>>choice;
		
		
		int count = 1;
		switch(choice)
		{
			case 1:
				if(count>5)
				{
					cout<<"\nThe box is full\n";
				}
				else
				{
					count++;
					cout<<"\nEnter the book no.:\n";
					cin>>bkNo;
					stk.push(bkNo);
				}	
				
				break;
			case 2:
				stk.pop();
				break;
			case 3:
				stk.display();
				break;
			case 4:
				return false;
				
			default:
				cout<<"Invalid option\n";
				
		}
	}while(true);
	return 0;
}
