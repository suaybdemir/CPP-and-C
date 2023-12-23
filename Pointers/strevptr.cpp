#include <iostream>

#include <string>

using namespace std;

char* reverseString(char*p){
	char* str = p;
	int length=-1;
	
	while(*str != '\0')
	{
		str++;
		length++;
	}
	
	char *p1 = p;
	char *p2 = p+length;
	
	while(p1<p2)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		
		p1++;
		p2--;
	}
	return p;
	
}

int main(void)
{
	char str[100];
	cout<<"Enter the string"<< endl;
	cin >> str;
	char *p = str;
	cout << " Reversed String " << endl;
	char * result = reverseString(p);
	while(*result != '\0')
	{
		cout<<*result;
		result++;
	}
	return 0;
}
