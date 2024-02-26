//IMPLEMENT 'main' IN THIS FILE

#include<iostream>
#include "Addition.h"


using namespace std;



class Operation{
    public:
    //Fill the code here

    friend class Addition;

    int addRealPart(const Addition& obj1,const Addition& obj2)
    {
        Addition sum = obj1 + obj2;
        return sum.getReal();
    }
    int addImaginaryPart(const Addition& obj1,const Addition& obj2)
    {
        Addition sum = (obj1,obj2);
        return sum.getImg();
    }
};   

int main()
{

    Addition a1;
    Addition a2;
    
    int real,img=0;
    cout<<"Enter real and imaginary part of the first complex number"<<endl;
    cin>>real;
    cin>>img;
    //Fill the code here

    a1.setImg(img);
    a1.setReal(real);

    cout<<"Enter real and imaginary part of the second complex number"<<endl;
    cin>>real;
    cin>>img;
    //Fill the code here

    a2.setImg(img);
    a2.setReal(real);

    Operation o;

    Addition a3 ;

    a3.setReal(o.addRealPart(a1,a2));
    a3.setImg(o.addImaginaryPart(a1,a2));

    int sumReal = a3.getReal();
    int sumImg = a3.getImg();

    cout<<"Sum of real and imaginary part is "<<sumReal<<"+i"<<sumImg<<endl;
    
    return 0;
}
