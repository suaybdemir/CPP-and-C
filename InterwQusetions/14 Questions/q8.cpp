#include <iostream>

void foo(int foo)
{
    if(!foo)
        return;
    std::cout<<foo<<endl;
    ::foo(foo-1);
}


int main(void)
{
    foo(3);
    return 0;
}


/*
    a) syntax error
    b) undefined behaviour
    c)output?

    answer 3,2,1
*/