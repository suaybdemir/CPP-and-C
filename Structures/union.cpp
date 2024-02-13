#include <iostream>
using namespace std;

union Examp{
    int value;
    float value2;
    char ch;

};

int main(void)
{
    Examp a;
    a.ch='S';
    cout<<" char: "<<a.ch<<endl;
    a.value=50;
    cout<<" int: "<<a.value<<endl;
    a.value2=3.14f;
    cout<<"float: "<<a.value2<<endl;
    return 0;
}
