#include <iostream>
using namespace std;

class Nec{
    private:
        class Nested {};
    public:
        static Nested foo();
};

int main(void)
{

    auto f = Nec::foo(); 
    return 0;
}