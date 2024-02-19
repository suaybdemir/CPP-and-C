#include <iostream>
using namespace std;

class College
{
    private:
        static string principal_name;
    public:
        void setPrincipleName(string name)
        {
            principal_name=name;
        }
        string getPrincipalName()
        {
            return principal_name;
        }
};
class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
        void setId(int id)
        {
            this->id=id;
        }
        int getId()
        {
            return id;
        }
        void setName()
        {
            this->name=name;
        }
        string getName(string name)
        {
            this->name=name;
        }
        void setMarks(float m[5])
        {
            for(int i=0; i<5;i++)
                marks[i]=m[i];
        }
        float *getMarks()
        {
            return marks;
        }
        College getCollegeObject()
        {
            return cObj;
        }
        void getStudentDetails();
        float calculateAverage();
        char findGrade();
        void displayStudentDetails();
};
string College::principal_name = "John";

void Student::getStudentDetails()
{
    cout<<"Enter Student ID : "<<endl;
    cin>>id;
    cout<<"Enter Student Name : "<<endl;
    cin>>name;
    cout<<"Enter the five subject marks : "<<endl;
    for(int i=0; i<5 ; i++)
        cin>>marks[i];

}

float Student::calculateAverage()
{
    int sum=0;
    for(int i=0; i<5 ; i++)
    {
        sum+=marks[i];
    }
    average=sum/6;
    return average;
}

char Student::findGrade()
{
    if(average<=100 && average >=80) grade = 'O';
    else if(average < 80 && average >= 50) grade = 'A';
    else grade = 'F';
    return grade;
}

void Student::displayStudentDetails()
{
    cout<<"Student Name : "<<name<<endl;
    cout<<"Student ID : "<<cObj.getPrincipalName()<<endl;
    cout<<"Average : "<<calculateAverage()<<endl;
    cout<<"Grade : "<<findGrade()<<endl;
}

int main(void)
{
    Student s1;
    s1.getStudentDetails();
    s1.displayStudentDetails();
    return 0;
}
