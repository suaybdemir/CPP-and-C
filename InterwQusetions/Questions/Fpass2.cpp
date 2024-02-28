#include <iostream>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

//typedef int(*mathFun) (int,int);

int main()
{
    int (*Arr[2])(int,int) = {add,sub};
    int c = (*Arr[0])(1,2);
    int d = (*Arr[1])(2,1);

    std::cout<<"c = "<<c<<std::endl;
    std::cout<<"d = "<<d<<std::endl;
}