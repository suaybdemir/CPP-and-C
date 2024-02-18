#include <iostream>
#include <string>
using namespace std;

class Mobile{
    
    private:    
        string mobileBrand;
        string mobileModelName;
        double mobilePrice;
        
    public:    
        string getMobileBrand()
        {
            return mobileBrand;
        }
        string getMobileModelName()
        {
            return  mobileModelName;
        }
        double getMobilePrice()
        {
            return mobilePrice;
        }
        
        void setMobileBrand(string brand)
        {
            mobileBrand = brand;
        }
        void setMobileModelName(string name)
        {
            mobileModelName = name;
        }
        void setMobilePrice(double price)
        {
            mobilePrice = price;
        }
};

int main()//DO NOT change the 'main' signature
{
        Mobile m;
        //Input statements are provided as part of the code skeleton
        string brand,model;
        double price;
        cout<<"Enter the mobile brand:"<<endl;
        cin>>brand;
        m.setMobileBrand(brand);
        cout<<"Enter the mobile model name:"<<endl;
        cin>>model;
        m.setMobileModelName(model);
        cout<<"Enter the mobile price:"<<endl;
        cin>>price;
        m.setMobilePrice(price);
        
        cout<<"Mobile Details"<<endl;
        cout<<"Mobile Brand:"<<m.getMobileBrand()<<endl;
        cout<<"Mobile Model Name:"<<m.getMobileModelName()<<endl;
        cout<<"Mobile Price :"<<m.getMobilePrice()<<endl;
        
        //Fill the code here
        return 0;
}
