#include <iostream>

using namespace std;


bool isValidEmail(string mail)
{
	int index ;
	
	for(int i = 0 ; i<mail.length() ; i++)
	{
		if(mail[i] == '@')
		{
			index = i;
		}
		else if(index == null)
		{
			return mail;
		}
	}
	for(index ; i<mail.length() ; i++)
	{
		if(mail[i]=='.')
		{
			return true;
		}
	}
	
	return false;


int main(void)
{
	string email;
	cin>>mail;
	
	if(isValidEmail(mail))
	{
		cout<<mail\n;
		cout<<"Valid email Id.";
	}
	else
	{
		cout<<"Invalid email Id";
	}
}