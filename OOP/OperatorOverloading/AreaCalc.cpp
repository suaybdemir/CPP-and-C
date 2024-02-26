#include <iostream>
using namespace std;

class Square;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth)
        {
            this->length = length;
            this->breadth= breadth;
        }
        friend void operator > (Rectangle r1,Square s2);
};

class Square
{
    private:
        int length;
    public:
        Square(int length)
        {
            this->length = length;
        }
        friend void operator > (Rectangle r1,Square s2);
};

void operator > (Rectangle r1,Square s2)
{
    r1.length>s2.length?cout<<"Length of Rectangle is more":cout<<"Length of Square is more";
}

int main(void)
{
    Rectangle obj1(1,2);
    Square obj2(4);
    obj1>obj2;
}