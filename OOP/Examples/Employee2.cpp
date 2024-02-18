#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        int getEmployeeId()
        {
            return employeeId;
        }
        string getEmployeeName()
        {
            return employeeName;
        }
        double getSalary()
        {
            return salary;
        }
        double getNetSalary()
        {
            return netSalary;
        }
        
        void setEmployeeId(int id)
        {
            employeeId=id;
        }
        void setEmployeeName(string name)
        {
            employeeName=name;
        }
        void setSalary(double sal)
        {
            salary = sal;
        }
        void calculateNetSalary(int pf)
        {
             double nsal = salary - ( salary*pf)/100 ;
             setNetSalary(nsal);
        }
        void setNetSalary(double nsal)
        {
            netSalary= nsal;
        }
        
        
};



int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of the code skeleton
    Employee e;
    int id;
	string name;
	double sal;
	float pf;
	cout<<"Enter Id:"<<endl;
	cin>>id;
	e.setEmployeeId(id);
	cout<<"Enter Name:"<<endl;
	cin>>name;
	e.setEmployeeName(name);
	cout<<"Enter salary:"<<endl;
	cin>>sal;
	e.setSalary(sal);
	cout<<"Enter PF percentage:"<<endl;
	cin>>pf;
    e.calculateNetSalary(pf);
	
	cout<<"Id:"<<e.getEmployeeId()<<endl;
	cout<<"Name:"<<e.getEmployeeName()<<endl;
	cout<<"Salary:"<<e.getSalary()<<endl;
	cout<<"Net Salary:"<<e.getNetSalary()<<endl;
    
    //Fill code here
    return 0;
}

