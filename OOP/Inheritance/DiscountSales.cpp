#include <iostream>
using namespace std;

class Products{
    public:
    int markedPrice(){
        return 1000;
    }
    int discount()
    {
        return 40;
    }
};

class Dress : public Products{
    public:
        char size(int chestSize)
        {
            if(chestSize >= 20 && chestSize<=30 ) return 'S';
            else if(chestSize>=31 && chestSize <=40) return 'M';
            else return 'L';
        }
};

class Shirt : public Dress{
    public:
        int price(int chestSize)
        {
            if(size(chestSize)=='L') return (markedPrice()+1000) - (markedPrice()*discount())/100 ;
            if(size(chestSize)=='M') return (markedPrice()+500) - (markedPrice*discount())/100;
            if(size(chestSize)=='S') return (markedPrice()) - (markedPrice()*discount())/100;

        }
};

int main(void)
{
    Shirt obj1;
    int size;
    cout<<"Enter the chest size : ";
    cin>>size;
    cout<<"Dress Size : "<<obj1.size(size)<<endl<<"Price (in $) :"<<obj1.price(size);
    return 0;
}