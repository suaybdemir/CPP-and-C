#include <iostream>
using namespace std;

class Eggs{
	private :
	float* weight;
	
	public :
	Eggs(float* e)
	{
		weight = e;
	}
	void setEggs(float* e)
	{
		this->weight = e;
	}
	float* getEggs()
	{
		return weight;
	}
};

class Utility
{
	public :
    bool Control(Eggs e, int n)
	{
		
		int fault = 0;
		int nideal = 0;
		
		for(int i = 0; i<n ; i++)
		{
			if(e.getEggs()[i]<50)
			{
				fault++;
			}
			else if(e.getEggs()[i]>70) 
			{
				nideal++;
			}
		
		}
		if(fault>4)
		{	
			cout<<"The box contains more than four faulty eggs";
			return false;
		}
		
		cout<<"Count of eggs with ideal weight="<<n-fault-nideal<<endl;
		cout<<"Count of eggs with non-ideal weight="<<nideal<<endl;
		cout<<"Count of eggs with faulty weight="<<fault<<endl;
		return true;
	}
};
	
int main()
{
	int i,n=0;
	
	cout<<"Enter the number of eggs"<<endl;
	cin>>n;
	
	float* weight = new float[n];
	cout<<"Enter the weight of the eggs(in grams)"<<endl;
	
	int fault = 0;
	
	while(i<n){
	
		cin>>weight[i];
		if(weight[i]<50)
		{
			fault++ ;
		}
		else if(fault>4)
		{
			i = n;
		}
		i++;
	}
	
	Eggs obj(weight);
	
	Utility u;
	
	u.Control(obj,n);
	
	return 0;
}
			
