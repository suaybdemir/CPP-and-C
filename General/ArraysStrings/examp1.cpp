#include <iostream>

using namespace std;

int main(void)
{
	char str[100];
	cout<<"Enter your name"<<endl;
	cin.getline(str,100);
	
	char arr[2][26]={{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
					 {'1','2','3','4','5','8','3','5','1','1','2','3','4','5','7','8','1','2','3','4','6','6','6','5','1','7'}};
					 
	bool flag = true ;
	int result = 0;
	
	for(int i=0 ; str[i] != '\0' ; i++)
	{
	  if(str[i] >= 65 && str[i] <=99)
	  {
		  int arrayIndex = str[i]-65 ;
		  result += arr[1][arrayIndex] - '0' ;
	  }
	  else
	  {
		  flag = false;
		  break;
	  }
	}
	if(flag==true)
	{
		cout<<"Your numerology no is:"<<result;
	}
	else
	{
		cout<<"Invalid name";
	}
	
	
	
	return 0;
}