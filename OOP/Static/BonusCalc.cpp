#include <iostream>
#include <string.h>
using namespace std;
class Company
{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails();
        static string getCompanyName()
        {
            return companyName;
        }
        static string getAddress()
        {
            return address;
        }
        static long int getContactNumber()
        {
            return contactNumber;
        }
        static void setCompanyName(string cname)
        {
            companyName=cname;
        }
        static void setAddress(string add)
        {
            address=add;
        }
        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }
};

string Company::companyName= "TekSoft";
string Company::address = "LosAngeles";
long int Company::contactNumber = 422245673;

class Employee
{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails();
        int calculateBonusPercentage();
        void displayEmployeeDetails();
        void setEmpName(string name)
        {
            empName=name;
        }
        string getEmpName()
        {
            return empName;
        }
        void setEmpId(int id)
        {
            empId=id;
        }
        int getEmpId()
        {
            return empId;
        }
        void setNetSalary(double net)
        {
            netSalary=net;
        }
        double getNetSalary()
        {
            return netSalary;
        }
        void setCobj(Company c)
        {
            cObj=c;
        }
        Company getCobj()
        {
            return cObj;
        }
        //include required getter methods
};

void Employee::getEmployeeDetails()
{
    cout<<"Enter Employee Name:"<<endl;
    cin>>empName;
    setEmpName(empName);
    cout<<"Enter Employee ID:"<<endl;
    cin>>empId;
    setEmpId(empId);
    cout<<"Enter Net Salary (In dollars):"<<endl;
    cin>>netSalary;
    setNetSalary(netSalary);
}

int Employee::calculateBonusPercentage()
{
    int bonusPercentage;
    if(netSalary>50000 && netSalary<=80000) 
    {
        bonusPercentage = 5;
    }
    else if(netSalary>30000 && netSalary<=50000)
    {
        bonusPercentage = 10;
    }
    else if(netSalary>10000 && netSalary <=30000)
    {
        bonusPercentage = 15;
    }
    else
    {
        bonusPercentage = 20;
    }
    return bonusPercentage;
}

void Employee::displayEmployeeDetails()
{
    cout<<"Company Name:"<<cObj.getCompanyName()<<endl;
    cout<<"Address:"<<cObj.getAddress()<<endl;
    cout<<"Contact Number:"<<cObj.getContactNumber()<<endl;
    cout<<"Employee Name:"<<getEmpName()<<endl;
    cout<<"Employee ID:"<<getEmpId()<<endl;
    cout<<"Employee Net Salary (In dollars):"<<getNetSalary()<<endl;
    cout<<"EMployee Bonus Percentage:"<<calculateBonusPercentage()<<"%"<<endl;
}
int main()  //DO NOT change the 'main' signature
{
        Employee e;
        e.getEmployeeDetails();
        e.displayEmployeeDetails();
        return 0;
}