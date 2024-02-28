#include <iostream>

struct Base{
    virtual ~Base()=default;
    virtual void vfunc(int x =1)
    {
        std::cout<<"B"<<x;
    }
};

struct Der : Base{
    virtual void vfunc(int x = 2) override{
        std::cout<<"D"<<x;
    }
};

void f(Base *bp)
{
    bp->vfunc();
}

int main(void)
{
    auto p = new Der;
    f(p);
    delete p;
}


/*
    a)undefined behaviour
    b)sytnax error
    c)output?


*/