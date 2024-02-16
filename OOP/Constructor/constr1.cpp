#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    private:
        int empld;
        char name[25];
        double salary;
    
    public:
        Employee(int id,const char* ename,double sal)
        {
            cout<<"Parameterized constructor called"<<endl;
            empld=id;
            strcpy(name,ename);
            salary=sal;
        }
};

int main(void)
{
    Employee empObj(101, "Rex" ,25000);
    return 0;
}