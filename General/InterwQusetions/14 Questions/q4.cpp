#include <iostream>

using namespace std;

class Base{
    public:
        virtual void vfunc()
        {
            cout<<"Base\n";
        }
};

class Der:  public Base{
    private:
        void vfunc() override
        {
            cout<< "Der\n";
        }
};

void f(Base& b)
{
    b.vfunc();
}

int main(void)
{

    Der myder;
    f(myder);
    return 0;
}

/*

a)syntax error with reasons
b)undefined behaviour and why?
c)if all these are true ?
    -output Base
    -output Der



*/