#include <iostream>
using namespace std;

class G;

class F
{
    private:
        int real,img;
    public:
        F() : real(0),img(0) {}
        F(int r,int i) : real(r),img(i) {}
        int getReal()
        {
            return real;
        }
        int getImg()
        {
            return img;
        }
        friend F G::operator+(const F& obj1,const F& obj2);
};

class G
{
    public:
        static F operator+(const F& obj1,const F& obj2);
        
};

F G::operator+(const F& obj1,const F& obj2)
{
    F obj3;
    obj3.real = obj1.real + obj2.real;
    obj3.img = obj1.img + obj2.img;
}


int main(void)
{
    int r1,r2,i1,i2;

    cout<<"Real"<<endl;
    cin>>r1>>r2;

    cout<<"Img"<<endl;
    cin>>i1>>i2;

    F obj1(r1,i1);
    F obj2(r2,i2);

    F obj3 = obj1 + obj2;

    cout<<"Real "<<obj3.getReal()<<"+i"<<obj3.getImg()<<endl; 
    return 0;
}