#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
	public:
		int data;
		Node * next;
};

class Stack{
	public:
		Node *top;
		Stack(){
			top = NULL;
		}
		void push(int value);
		void pop();
		int peek();
		void display();
};

void Stack::push(int n){
	Node *newNode = new Node();
	newNode->data = n;
	if(top==NULL){
		newNode->next = NULL;
	}
	else
	{
		newNode->next = top;
	}
	top=newNode;
}


void Stack::pop()
{
	Node*temp;
	if(top==NULL)
	{
		cout<<"Stack underflow"<<endl;
		return;
	}
	temp = top;
	top = top->next;
	delete temp;
}


int Stack::peek(){
	//Check for stack underflow
	if(top==NULL)
	{
		cout<<"\nStack underflow";
		return -1;
	}
	return top->data;
}

void Stack::display(){
	Node *temp;
	//Check for stack underflow
	if(top==NULL)
	{
		cout<<"\nStack underflow";
	}
	else
	{
		temp = top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
}

int main(void)
{
	Stack stk;
	stk.push(30);
	stk.push(20);
	stk.push(50);
	stk.push(70);
	stk.display();
	stk.pop();
	int top_value = stk.peek();
	if(top_value!=-1)
	{
		cout<<"\nTop value is : "<<top_value<<"\n";
	}
	cout<<"Elements after the pop operation:\n";
	stk.display();
	return 0;
}
	


