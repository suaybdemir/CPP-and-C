#include <iostream>
using namespace std;

class Train //Add required code
{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;
    public:
    //include required getter and setter method
        void setPassengerPhone(long p_phone)
        {
            passengerPhone=p_phone;
        }
        long getPassengerPhone()
        {
            return passengerPhone;
        }
        void setPassengerName(string name){
            passengerName= name;
        }
        string getPassengerName()
        {
            return passengerName;
        }
        void setGender(char g)
        {
            gender = g;
        }
        char getGender()
        {
            return gender;
        }
        void setAge(int a)
        {
            age= a;
        }
        int getAge()
        {
            return age;
        }
        void setTicketPrice(double price)
        {
            ticketPrice=price;
        }
        double getTicketPrice()
        {
            return ticketPrice;
        }
        double calculateAmount();
};

double Train::calculateAmount()
{
    double discount = 0;

    if(age<16)
    {
        discount = 0.5;
    } 
    else if(age>=60) 
    {
        discount = 0.25;
    }
    else if(getGender()=='F')
    {
        discount = 0.1;
    } 

    return getTicketPrice() * (1-discount);
}

int main(){   //DO NOT change the 'main' signature
    //Fill code here
    Train t;
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    t.setPassengerPhone(phone);
    cout<<"Enter the Passenger name : ";
    cin>>name;
    t.setPassengerName(name);
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    t.setAge(age);
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    t.setGender(gender);
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;
    t.setTicketPrice(ticketPrice);

    double tAmount = t.calculateAmount();

    cout<<"Total Amount(In dollars):"<<tAmount<<endl;
    return 0;
}
