#include <iostream>

using namespace std;

class Base{
    public:
        void func(int);
        //.
};

class Der : public Base{
    public:
        void func(int,int);
};

int main(void)
{

    Der myder;

    myder.func(10);
    return 0;
}


/*
a)syntax error
b)undefined behaviour
c)base::func called


answer : syntax error
You need to override
*/