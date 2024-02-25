#include <iostream>
#include<string>
using namespace std;

int calculateTotalReturns(string stockName,double price,int number)
{
    return price*number;
}
int calculateTotalReturns(int amount,int interestRate)
{
    return amount + (amount*interestRate)/100 ;
}
int calculateTotalReturns(int depositAmount ,int term,int returnRate)
{
    int totalAmount = depositAmount*12*term;
    return totalAmount + (totalAmount*returnRate)/100 ;
}

//Fill code here

int main()   //DO NOT change the 'main' signature
{
    string stockName;
    int numbers,amount,rate,depositAmount,term,rRate;
    double sharePrice;
    cout<<"Stock:"<<endl;
    cout<<"Enter stock name: "<<endl;
    cin>>stockName;
    cout<<"Enter stock price: "<<endl;
    cin>>sharePrice;
    cout<<"Enter number of stocks : "<<endl;
    cin>>numbers;
    //Fill code here

    cout<<"Total Returns (In US dollars):"<<calculateTotalReturns(stockName,sharePrice,numbers)<<endl;

    cout<<"FD:"<<endl;
    cout<<"Enter Amount in US dollars: "<<endl;
    cin>>amount;
    cout<<"Enter interest rate : "<<endl;
    cin>>rate;
    //Fill code here

    cout<<"Total Returns (In US dollars):"<<calculateTotalReturns(amount,rate)<<endl;

    cout<<"Mutual Funds :"<<endl;
    cout<<"Enter amount invested every month: "<<endl;
    cin>>depositAmount;
    cout<<"Enter term in years: "<<endl;
    cin>>term;
    cout<<"Enter return rate : "<<endl;
    cin>>rRate;
 
    cout<<"Total Returns (In US dollars):"<<calculateTotalReturns(depositAmount,term,rRate)<<endl;
    //Fill code here
    return 0;
}