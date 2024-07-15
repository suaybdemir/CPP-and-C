#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class Vector{
	T*data;
	int cap;
	int index;
		void growth(){
			if(size()>=capacity()){
				cap *= 2;
				T *tmp = new T[cap];
				for(int i=0 ; i<size() ; i++)
					tmp[i] = data[i];
				free(data);
				data = tmp;
			}
		}
		void shrink(){
			if(size()<capacity()/2 && capacity()!=1 )
			{
				cap /= 2;
				T *tmp = new T[cap];
				for(int i=0; i<size(); i++)
				{
					tmp[i] = data[i];
				}
				free(data);
				data = tmp; 
			}
		}
	public:
		Vector() : data(NULL),index(-1),cap(1){ data = new T[cap]; }
	
		int size()const{ return index; }
		int capacity()const{ 
			return cap;
		}
		void push_back(const T& value)
		{
			index++;
			growth();
			data[index]=value;
		}
		void pop_back(){ 
			if(isEmpty())
				throw "Error : Vector is empty.";
			index--; 
			shrink();
		}
		
		bool isEmpty()const{return size()==-1;}
	
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
		
		T* begin()const
		{
			return data;
		}
		
		T* end()const{
			return data + capacity();
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
		
		cout<<v.capacity()<<endl;
		
		cout<<v.back();
		
		cout<<endl;
		
		cout<<v.isEmpty()<<endl;
		
		cout<<v.front()<<endl;
	/*	
		v.pop_back();
		cout<<"index : "<< v.size()<<endl;
		cout<<"capacity : "<< v.capacity()<<endl;
		v.pop_back();
		cout<<"index : "<< v.size()<<endl;
		cout<<"capacity : " << v.capacity()<<endl;
	*/	
		
		cout<<"begin : "<<v.begin()<<endl;
		cout<<"end : "<<v.end()<<endl;
		int *begin = v.begin();
		int *end= v.end();
		while(begin!=end)
		{
			cout<<*begin<<" ";
			begin ++;
		}
	}catch(const char* exception)
	{
		cout<<exception;
	}
	
	
	return 0;
}
