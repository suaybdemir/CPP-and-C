#include <iostream>

using namespace std;

int factorial(int n)
{
	if(n<=1)
		return 1;
		
	return n*factorial(n-1);
}


int main(void)
{
	int num = factorial(3);
	cout<<num;
	return 0;
}
