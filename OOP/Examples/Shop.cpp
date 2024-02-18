#include <iostream>
using namespace std;

class Shop {

    private:
        string itemName;
        int itemQuantity;
        double itemPrice;

    public:
         //Getters and setters for above variables.
         string getItemName()
         {
             return itemName;
         }
         int getItemQuantity()
         {
             return itemQuantity;
         }
         double getItemPrice()
         {
             return itemPrice;
         }
         
         void setItemName(string name)
         {
             itemName=name;
         }
         void setItemQuantity(int quantity)
         {
             itemQuantity=quantity;
         }
         void setItemPrice(double price)
         {
             itemPrice=price;
         }
   
};

int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of code 
    Shop s;
    string name;
    int quantity;
    double price;
    cout<<"Enter the item name:"<<endl;
    cin>>name;
    s.setItemName(name);
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;
    s.setItemQuantity(quantity);
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    s.setItemPrice(price);
    
    cout<<"Item Name:"<<s.getItemName()<<endl;
    cout<<"Item Quantity:"<<s.getItemQuantity()<<endl;
    cout<<"Item Price:"<<s.getItemPrice()<<endl;
    
    
    //Fill the code here 
    return 0;
}
