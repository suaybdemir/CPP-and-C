#include <iostream>
using namespace std;

class Student {    //DO NOT change the class name
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
    public:
        int getStudentId()
        {
            return studentId;
        }
        string getName()
        {
            return name;
        }
        int getDepartmentId()
        {
            return departmentId;
        }
        string getGender()
        {
            return gender;
        }
        string getPhoneNumber()
        {
            return phoneNumber;
        }
        
        void setStudentId(int id)
        {
            studentId = id ;
        }
        void setName(string n)
        {
            name = n;
        }
        void setDepartmentId(int d_id)
        {
            departmentId = d_id;
        }
        void setGender(string gen)
        {
            gender = gen;
        }
        void setPhoneNumber(string number)
        {
            phoneNumber=number;
        }
    
};
int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of the code skeleton
    Student s;
    int id,deptId;
    string name,gender,phNo;
    cout<<"Enter the details:"<<endl;
    cout<<"Student Id"<<endl;
    cin>>id;
    s.setStudentId(id);
    cout<<"Student Name"<<endl;
    cin>>name;
    s.setName(name);
    cout<<"Department Id"<<endl;
    cin>>deptId;
    s.setDepartmentId(deptId);
    cout<<"Gender"<<endl;
    cin>>gender;
    s.setGender(gender);
    cout<<"Phone Number"<<endl;
    cin>>phNo;
    s.setPhoneNumber(phNo);
    
    cout<<s.getStudentId()<<" "<<s.getName()<<" "<<s.getDepartmentId()<<" "<<s.getGender()<<" "<<s.getPhoneNumber()<<endl;
       return 0;
}


