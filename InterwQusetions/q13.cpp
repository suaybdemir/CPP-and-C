#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{

    bitset<8>  bs {15u};
    cout<<bs<<2<<'n';
    cout<<(bs<<2)<<'n';
    return 0;
}