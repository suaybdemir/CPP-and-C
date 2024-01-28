#include <iostream>

using namespace std;

#define MAX 10 //!!!!!!!!

class Stack{
	public:
		int arr[MAX];
		int top;
		Stack(){
			top= -1;
		}
		void push(int item);
		int pop();
		int peek();
};

void Stack::push(int item)
{
	if(top>=(MAX-1))
	{
		cout<<"\nStack overflow ";
	}
	else
	{
		arr[++top] = item;
		cout<<"\nElement added "<<item;
	}
}
int Stack::pop()
{
	if(top<0)
	{
		cout<<"\nStack underflow ";
		return -1;
	}
	else
	{
		int item = arr[top--];
		return item;
	}
}

int Stack::peek()
{
	if(top<0){
		cout<<"\nStack underflow ";
		return -1;
	}
	else
	{
		int item = arr[top];
		return item;
	}
}
int main(void)
{
	Stack st;
	
	
	st.push(8);
	st.push(4);
	st.push(5);
	st.push(9);
	
	
	int value = st.pop();
	
	if(value!=-1){
		cout<<"\nDeleted element "<<value;
	}
	
	
	int top = st.peek();
	
	if(top!=-1){
		cout<<"\nTop element "<<top;
	}
	return 0;
}
