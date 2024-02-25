#include<iostream>
#include <string>
using namespace std;

class Person {
    
protected:
    string socialSecurityNumber;
public:
    void setSocialSecurityNumber(string ssn)
    {
        socialSecurityNumber = ssn;
    }
    string getSocialNumber()
    {
        return socialSecurityNumber;
    }
};

class Student : virtual public Person
{
protected:
    int studentId;
  public:  
      //include getter and setter
      void setStudentId(int id)
      {
        studentId=id;
      }
      int getStudentId()
      {
        return studentId;
      }
	  	  		  	     	     	       	 	
};

class Employee  : virtual public Person
{
protected:
    int employeeId;
public:
   //include getter and setter
   void setEmployeeId(int id)
   {
        employeeId=id;
   }
   int getEmployeeId()
   {
        return employeeId;
   }
};

class Trainee : public Employee , public Student
{
private:
    int traineeId;
public:
   //include getter and setter
   void setTraineeId(int id)
   {
        traineeId=id;
   }
   int getTraineeId()
   {
        return traineeId;
   }

};

int main() {
    
    Trainee t;
    string ssn;
    int id;
    cout<<"Enter Trainee ID:";
    cin>>id;
    cout<<"Enter SSN Number:";
    cin>>ssn;

    t.setTraineeId(id);
    t.setSocialSecurityNumber(ssn);

    cout<<"Trainee ID: "<<t.getTraineeId()<<endl;
    cout<<"Social Security Number: "<<t.getSocialNumber()<<endl;

    //fill the code here
    return 0;
}	 	  	  		  	     	     	       	 	