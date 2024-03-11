#include <iostream>
using namespace std;

int main(void)
{
    char ch = '\x27';
    ch = '\47';
    cout<<ch<<"Warning! \a"<<endl;
    return 0;
}