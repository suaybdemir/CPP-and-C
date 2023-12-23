#include <iostream>

using namespace std;

int main(void)
{
	int index,collength,rowlength;char **names;
	cout<<"Enter the number of names "<<endl;
	cin>>rowlength;
	names = (char**)new char (sizeof(char*)*rowlength);
	for(index=0;index<rowlength;index++)
	{
		cout<<" Enter the length of name " << index + 1 << endl;
		cin >> collength;
		names[index] = (char*)new char (sizeof(char)*(collength));
		cout<<" Enter the " <<index+1<<" st name " << endl;
			cin>> names[index];
	}
	cout<<" List of names " << endl;
	for(index = 0; index <rowlength ; index++)
	{
		cout<< names[index]<<endl;
	}
	return 0;
}