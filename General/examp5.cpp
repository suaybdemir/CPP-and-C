#include <iostream>

using namespace std;

int main()
{
	int tickets;
	cout<<"Enter the number of tickets [a minimum of 5 to a maximum of 40 tickets]:"<<endl;
	cin>>tickets;
	
	char refreshment;
	cout<<"Do you want refreshments?:<<endl;
	cin>>refreshment;
	
	char coupon;
	cout<<"Do you have a special coupon:"<<endl;
	cin>>coupon;
	
	char seat;
	cout<<"Enter the type of seat[Classic / Premiere]:"<<endl;
	cin>>seat;
	
	if(tickets <5 || tickets >40)
	{
		cout<<"Minimum of 5 and Maximum of 40 Tickets";
	}
	else if(seat=='p')
	{
		double cost = 150;
		if(tickets>20)
		{
			cost *= 0.9;
		}
		if(coupon=='y')
		{
			cost *= 0.98;
		}
		cost = cost*tickets;
		if(refreshment=='y')
		{
			cost += tickets*50;
		}
		
		cout<<"Ticket cost:"<<cost;
	}
	else if(seat=='p')
	{
		double cost = 75;
		if(tickets>20)
		{
			cost *= 0.9;
		}
		if(coupon=='y')
		{
			cost *= 0.98;
		}
		cost = cost*tickets;
		if(refreshment=='y')
		{
			cost += tickets*50;
		}
		
		cout<<"Ticket cost:"<<cost;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	return 0;
}