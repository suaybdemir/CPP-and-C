#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        static int count;
        static int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        static void setEmployeeId(int id)
        {
            employeeId=id;
        }
        static int getEmployeeId()
        {
            return employeeId;
        }
        void setEmployeeName(string name)
        {
            employeeName = name;
        }
        string getEmployeeName()
        {
            return employeeName;
        }
        void setSalary(double sal)
        {
            salary=sal;
        }
        double getSalary()
        {
            return salary;
        }
        void setNetSalary(double nsal)
        {
            netSalary=nsal;
        }
        double getNetSalary()
        {
            return netSalary;
        }
        void calculateNetSalary(int pfpercentage);
        void display();
        void getEmployeeDetails();
        static int generateEmployeeId();
};

int Employee::count = 100;
int Employee::employeeId=count;

void Employee::calculateNetSalary(int pfpercentage)
{
    netSalary= salary - (pfpercentage*salary)/100 ;
    setNetSalary(netSalary);
}

void Employee::getEmployeeDetails()
{   
    cout<<"Enter Name:"<<endl;
    cin>>employeeName;
    setEmployeeName(employeeName);
    cout<<"Enter salary (In dollars):"<<endl;
    cin>>salary;
    setSalary(salary);
    generateEmployeeId();
}

int Employee::generateEmployeeId()
{
    return count++;
}

void Employee::display()
{
    cout<<"Id:\n"<< getEmployeeId()<<endl;
    cout<<"Name:"<<getEmployeeName()<<endl;
    cout<<"Net Salary (In dollars): "<<getNetSalary()<<endl;
}

int main(void)
{
    Employee e;
    e.getEmployeeDetails();
    int pfpercentage;
    cout<<"Enter PF percentage:"<<endl;
    cin>>pfpercentage;
    e.calculateNetSalary(pfpercentage);
    e.display();
    return 0;
}
