#include <iostream>
using namespace std;
 
class Product
{
  protected:
    int markedPrice=1000;
    int discount=40;
    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice=mPrice;
        }
        void setDiscount(int dis)
        {
            discount=dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};
 
class Dress  : public Product
{
  public:
    char findSize(int chestSize){
          //Implement your code
          if(chestSize>=20 && chestSize<=30) return 'S';
          else if(chestSize>31 && chestSize<=40) return 'M';
          else if(chestSize >40) return 'L';
          return '\0';
    }

};
 class Shirt  : public Dress
 {
  public:
     int calculatePrice(char chestSize){

        setMarkedPrice(markedPrice - (markedPrice*discount)/100);

        char size = findSize(chestSize);

        if(size=='L') setMarkedPrice(1000+getMarkedPrice());
        else if(size=='M') setMarkedPrice(500+getMarkedPrice());
        else return getMarkedPrice();

        setMarkedPrice(markedPrice);
        
        return getMarkedPrice();
     }
};

// main function
int main()
{
    Shirt s;
    int size;
   cout<<"Enter the chest size : ";
   cin>>size;
   //fill the code here

    s.calculatePrice(size);

   cout<<"Dress Size : "<<s.findSize(size)<<endl;
   cout<<"Price (in $): "<<s.getMarkedPrice()<<endl;
    return 0;
}