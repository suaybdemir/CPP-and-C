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
		int capacity()const{ return cap; }

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
 
        T& at(int index)
        {
            if(index >= 0 && index < size()) return data[index];
            throw "Error : Vector index overflow";
        }

        T& operator[](int index)
        {
            return at(index);
        }
};


int main(void)
{
	Vector<int> v;
	try{
		
		v.push_back(10);
		v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
        v.push_back(60);
        v.push_back(0);
        v.push_back(70);

        v[3] = 3;

        cout<<v.at(3)<<endl;
		
	}catch(const char* exception)
	{
		cout<<exception;
	}
	
	
	return 0;
}
