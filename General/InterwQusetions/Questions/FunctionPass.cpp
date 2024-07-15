#include <iostream>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

typedef int(*mathFun) (int,int);

mathFun fun(int type)
{
    if(type==1) return add;
    else return sub;
}

int main()
{
    int (*someFun)(int,int);
    someFun = fun(1);

    int c =someFun(1,2);

    
    std::cout<<"c = "<<c<<std::endl;
}