#include <iostream>
#include <cmath>
using namespace std;

int countGift(int age)
{
	int count;
	if(age<=0)
	{
		cout<<"-1";
		return -1;
	}
	else if(age%2==0)
	{
		count = pow(age,3);
		cout<<count;
		return count;
	}
	else
	{
		count = pow(age,2);
		cout<<count;
		return count;
	}
}
int main()
{
	long long age;
	cin>>age;
	countGift(age);
	return 0;
}
