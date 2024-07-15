#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    typedef vector<int> vInt;

    vInt v;

    v.push_back(100);
    v.push_back(90);
    v.push_back(80);
    v.push_back(110);

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
