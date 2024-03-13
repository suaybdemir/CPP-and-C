#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
void _swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

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

        void reset(int index=0 , int cap=1)
        {
            free(data);
            data = NULL;
            this->index = index;
            this->cap = cap;
        }
	public:
		Vector() : data(NULL),index(0),cap(1){ data = new T[cap]; }
	
		int size()const{ return index; }
		int capacity()const{ return cap; }

		void push_back(const T& value)
		{
			growth();
			data[index++]=value;
		}
		void pop_back(){ 
			if(isEmpty())
				throw "Error : Vector is empty.";
			index--; 
			shrink();
		}
		
		bool isEmpty()const{return size()==0;}
	
		T front()const{
			if(isEmpty())
				throw "Error : Vector is empty.";
			return data[0];
		}
		
		T back()const{
			if(isEmpty())
				throw "Error : Vector is empty.";
			return data[index-1];
		}
		
		T* begin()const
		{
			return data;
		}
		
		T* end()const{
			return data + size();
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

        void clear()
        {
            reset();
            data = new T[cap];
        }

        void insert(const T* pos, const T& value)
        {
            if(begin() <= pos && pos <= end())
            {
                int index = pos - begin() ;
                push_back(value);
                for(int i = size()-1 ; i>index ; i--)
                {
                    _swap(data[i],data[i-1]);
                }
            }
            else throw "Error : Vector insert";
        }

        void insert(const T* pos,const T* first,const T* last)
        {
            int index = pos - begin();
            while (first != last)
            {
                insert(begin() + index++ , *first++);
            }
            
        }

        void erase(const T* pos){
            if(begin() <= pos && pos <= end())
            {
                int index = pos - begin();
                for(int i = index;i < size(); i++)
                {
                    data[i]=data[i+1];
                }
                pop_back();
            }
            else throw "Error : Vector Erase";
        }
};


int main(void)
{
	Vector<int> v;
   
    v.push_back(2);
    v.push_back(20);
    v.push_back(200);
    v.insert(&v[2],100);

    v.erase(v.begin());
    v.erase(v.end());

    int *begin = v.begin();
    int *end = v.end();

    while(begin!=end)
    {
        cout<<*begin<<" ";
        begin++;
    } 

    cout<<endl;
	
	return 0;
}
