#include <iostream>
#include <cstdlib>
#define MAX 50
using namespace std;

class Stack{
	int top;
	public:
		int stk[MAX];
		Stack()
		{
			top = -1;
		}
		void push(int data);
		int findMiddle();
		int pop();
};

void Stack::push(int data)
{
	stk[++top]=data;
	return ;
}

int Stack::pop()
{
	int tmp = stk[top--];
	cout<<"The popped element is: "<<tmp;
	return stk;
}

int Stack::findMiddle(){
	int n = top;
	cout<<"The middle element is: "<<stk[n/2]<<endl;
	return stk[n/2];
}
	

int main(void)
{
	int no;
	Stack st;
	cout<<"\nEnter the number of elements to be pushed into the stack:";
	cin>>no;
	for(size_t i = 0; i<no ; i++)
	{
		cout<<"Enter element "<<i+1<<":\n";
		int num;
		cin>>num;
		st.push(num);
	}
	if(no<1)
	{
		cout<<"Invalid input";
	}
	else
	{
		st.findMiddle();
		st.pop();
	}
	
	return 0;
}
