#include <iostream>
using namespace std;

class A
{
    private:
        int num;
    public:

        A(int num) : num(num) {}
        
        int getNum()
        {
            return num;
        }

        A operator+(const A& a)
        {
            return A(this->num + a.num);
        }
};

int main(void)
{
    int num1,num2;

    cin>>num1>>num2;

    A a(num1);
    A b(num2);

    A c = a + b;

    cout<<c.getNum()<<endl;

    return 0;
}