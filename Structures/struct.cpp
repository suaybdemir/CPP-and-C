#include <iostream>
using namespace std;

struct Date{
    int day,month,year;
};

struct Advertisement
{
    string companyName;
    float price;
    int duration;
    char isCertified;
    struct Date dateOfAdvt;
};

int main(void)
{
    Advertisement renaultDusterAdvtObj;
    renaultDusterAdvtObj.companyName="Renault";
    renaultDusterAdvtObj.price=1899.50;
    renaultDusterAdvtObj.duration=2;
    renaultDusterAdvtObj.isCertified='Y';
    renaultDusterAdvtObj.dateOfAdvt.day=25;
    renaultDusterAdvtObj.dateOfAdvt.month=12;
    renaultDusterAdvtObj.dateOfAdvt.year=2022;
    cout<<"Advertisement Details"<<endl;
    cout<<"Company Name :"<<renaultDusterAdvtObj.companyName<<endl;
    cout<<"Duration in Mints :"<<renaultDusterAdvtObj.duration<<endl;
    cout<<"Price :"<<renaultDusterAdvtObj.price<<endl;
    cout<<"Censor Certified :"<<renaultDusterAdvtObj.isCertified<<endl;
    cout<<"Date of Advertisement :"<<renaultDusterAdvtObj.dateOfAdvt.day;
    cout<<"-"<<renaultDusterAdvtObj.dateOfAdvt.month;
    cout<<"-"<<renaultDusterAdvtObj.dateOfAdvt.year<<endl;
    return 0;

}
