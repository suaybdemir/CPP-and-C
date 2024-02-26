#include <iostream>
using namespace std;

class Product
{
    private:
        int productId;
        int quantity;
        double unitPrice;

    public:
        Product(int prodcutId,int quantity,double unitPrice)
        {
            this->productId=prodcutId;
            this->quantity=quantity;
            this->unitPrice=unitPrice;
        }

        double calculateCost()
        {
            return (quantity*unitPrice);
        }
        friend class Discount;
};

class Discount
{
    public:
    bool checkDiscount(Product obj)
    {
        if(obj.quantity>5)
        {
            return true;
        }
        else return false;
    }
};

int main(void)
{
    Product p1(345,10,30);
    cout<<"Product cost (without discount)=$"<<p1.calculateCost()<<endl;

    Discount d1;
    bool flag = d1.checkDiscount(p1);
    if(flag) cout<<"product is eligible for discount";
    else cout<<"Product not eligible for discount";
}