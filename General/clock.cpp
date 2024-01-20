#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	
	system("color 70");
	int h;
	int m;
	int s;
	

	cout<<"Type h,m,s"<<endl;
	cin>>h>>m>>s;
	
	if(h>=24)
	{
		h = h%24;
	}
	if(m>=60)
	{
		m = m%60;
	}
	if(s>=60)
	{
		s = s%60;
	}

	
	
	system("cls");
	
	while(s<60)
	{
	
		cout<<h<<":"<<m<<":"<<s<<endl;
		
		Sleep(1000);
		system("cls");
		s++;
		if(s>=60)
		{
			s=0;
			m++;
		}
		else if(m>=60)
		{
			s=0;
			m=0;
			h++;
		}
		else if(h>=24)
		{
			s=0;
			m=0;
			h=0;
		}
		
	}
	
	return 0;
}
