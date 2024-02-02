#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};


class Stack{
	public:
		Node * top ;
		Stack()
		{
			top = NULL;
		}
		void push(int data);
		int pop();
};

void Stack::push(int data)
{
	Node *newNode = new Node();
	newNode->data = data;
	newNode->next = top;
	top = newNode;
}

int Stack::pop()
{
	Node *temp;
	if(top==NULL)
	{
		cout<<"Stack underflow"<<endl;
		return 0;
	}
	int num = top->data;
	temp = top;
	top = top->next;
	free(temp);
	return num;
}

int checkPalindrome(Stack stk, int arr[], int size)
{
	for(size_t i = 0 ; i<size/2 ; i++)
	{
		int num = stk.pop();
		cout<<"Popped element:"<<num<<endl;
		if(num != arr[i])
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	Stack stk;
	int size,i,data;
	
	cin>>size;
	if(size<2)
	{
		cout<<"Invalid input";
		return 0;
	}
	
	int arr[size];
	for(i=0 ; i<size ; i++)
	{
		cin>>data;
		arr[i]=data;
		stk.push(data);
	}
	
	cout<<checkPalindrome(stk,arr,size)<<endl;
	
	return 0;
}
