#include <iostream>
#include <string>
using namespace std;

int stringLength(char* str)
{
	
	int n = 0;

	while(*str != '\0')
	{
		str++;
		n++;
	}
	
	return n;
}

int main(void)
{
	char input[100];
	cin.getline(input,100);
	int len = stringLength(input);
	
	
	cout<<len<<endl;
}
