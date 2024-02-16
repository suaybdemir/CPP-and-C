#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double length;
        double breadth;
    public:
        Rectangle(int length,int breadth)
        {
            this->length=length;
            this->breadth=breadth;
        }
        double calculateArea()
        {
            return length*breadth;
        }
        double diffArea(Rectangle r)
        {
            double diffArea = this->calculateArea()-r.calculateArea();
            return diffArea;
        }
};
int main(void)
{
    Rectangle r1(3,4);
    Rectangle r2(2,3);
    cout<<"Difference in Area : "<<r1.diffArea(r2)<<endl;
    return 0;
}