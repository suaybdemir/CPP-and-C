#include <iostream>
using namespace std;

int x = 10; //local variable


//scope


int main(void)
{
    int x = x; //global variable garbage adding
    //int x = ::x;

    cout<<"x = "<<x<<endl;
    return 0;
}

//answer = undefined behaviour