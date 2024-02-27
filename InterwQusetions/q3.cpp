#include <iostream>

class Nec{
    public:
    void func(long double);
    private:
    void func(double);
};

int main(void)
{

    Nec x;

    x.func(2.3f);
    return 0;
}

/*

a)syntax error
b)behaviour problem
c)well defined

answer a because of access denied
*/