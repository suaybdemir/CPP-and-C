#include <iostream>
using namespace std;

template<class T>
class Vector{
	T*data;
	int cap;
	int index;
	public:
		Vector() : data(NULL),index(-1),cap(1){
			data = new T[cap];
		}
		
		int size()const{ return index; }
		int capacity()const{ return cap; }
		void push_back(const T& value)
		{
			data[++index]=value;
		}
		void pop_back()
		{
			index--;
		}
		
		bool isEmpty()const{
			return size()==-1;
		}
		
		T front()const{
			if(isEmpty())
				throw "Error : Vector is empty.";
			return data[0];
		}
		
		T back()const{
			if(isEmpty())
				throw "Error : Vector is empty.";
			return data[index];
		}
};


int main(void)
{
	Vector<int> v;
	try{
		
		/*
		cout<<v.capacity();
		cout<<"\n"<<v.size()<<endl;
		cout<<v.isEmpty();
		*/
		cout<<endl;
		
		v.push_back(10);
		v.push_back(20);
		//v.pop_back();
		
		cout<<v.back();
		
		cout<<endl;
		
		cout<<v.isEmpty()<<endl;
		
		cout<<v.front()<<endl;
		
	}catch(const char* exception)
	{
		cout<<exception;
	}
	
	
	return 0;
}
