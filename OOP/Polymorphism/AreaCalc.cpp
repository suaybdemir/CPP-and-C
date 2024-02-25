#include <iostream>
using namespace std;

class Shape
{
    public:
        
        virtual double calculateAre()=0;
        
};

class Circle : public Shape
{
    private :
        int radius;
    public:
        void setRadius(int r)
        {
            radius=r ;
        }
        int getRadius()
        {
            return radius;
        }
        double calculateArea(int radius)
        {
            return 3.14 * radius * radius;
        }
};

class Rectangle : public Shape
{
    private  :
        int width,height;
    public:
    void setWidth(int w)
    {
        width= w;
    }
    int getWidth()
    {
        return width;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }
    double calculateArea(int width,int height)
    {
        return width*height;
    }
};

class Triangle : public Shape
{
        private:
            float base,height;
        public:
            void setBase(float b)
            {
                base =b ;
            }
            float getBase()
            {
                return base;
            }
            void setHeight(float h)
            {
                height=h;
            }
            float getHeight()
            {
                return height;
            }
            double calculateArea(float base,float height)
            {
                return base * height /2;
            }

};

int main(void)
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    string shape;

    cout<<"Enter the type of shape:"<<endl;
    cin>>shape;
    double result;


    if(shape== "Circle")
    {
        int radius;
        cout<<"Enter the radius (in cm):"<<endl;
        cin>>radius;
        circle.setRadius(radius);
        result = circle.calculateArea(circle.getRadius());
    }
    else if(shape=="Rectangle")
    {
        int width,height;
        cout<<"Enter the width (in cm):"<<endl;
        cin>>width;
        rectangle.setWidth(width);
        cout<<"Enter the height (in cm):"<<endl;
        cin>>height;
        rectangle.setHeight(height);
        result = rectangle.calculateArea(rectangle.getWidth(),rectangle.getHeight());
    }
    else if(shape=="Triangle")
    {
        float base,height;
        cout<<"Enter the base (in cm):"<<endl;
        cin>>base;
        triangle.setBase(base);
        cout<<"Enter the height (in cm)"<<endl;
        cin>>height;
        triangle.setHeight(height);
        result = triangle.calculateArea(triangle.getBase(),triangle.getHeight());
    }


    cout<<"The area of the "<<shape<<" is: "<<result<<" square centimeters"<<endl;


    return 0;
}