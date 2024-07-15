#include <iostream>

using namespace std;


bool isValidEmail(string mail)
{
	int index = -1;
	
	for(int i = 0 ; i<mail.length() ; i++)
	{
		if(mail[i] == '@')
		{
			index = i+1;
		}
		else if(index == -1)
		{
			return false;
		}
	}
	for(index ; index<mail.length() ; index++)
	{
		if(mail[index]=='.')
		{
			return true;
		}
	}
	
	return false;

}
int main(void)
{
	string mail;
	cin>>mail;
	
	if(isValidEmail(mail))
	{
		cout<<mail<<endl;
		cout<<"Valid email Id.";
	}
	else
	{
		cout<<mail<<endl;
		cout<<"Invalid email Id";
	}
}
