#include <iostream>
using namespace std;

class Nec{
    public:
        static int x;
        static int foo()
        {
            return 1;
        }
};

int foo()
{
    return 2;
}

int Nec::x = foo();


int main(void)
{
    cout<<Nec::x;
    return 0;
}