#include <iostream>
using namespace std;
class College
{
    private:
        static string principal_name;
    public:
        static void setPrincipalName(string name)
        {
            principal_name=name;
        }
        static string getPrincipalName()
        {
            return principal_name;
        }
};

string College::principal_name = "John";

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
        void getStudentDetails();
        void calculateAverage();
        void findGrade();
        void displayStudentDetails();
        void setId(int id)
        {
            this->id=id;
        }
        int getId()
        {
            return id;
        }
        void setAverage(float average)
        {
            this->average=average;
        }
        int getAverage()
        {
            return average;
        }
        void setName(string n)
        {
            name=n;
        }
        string getName()
        {
            return name;
        }
        void setMarks(float m[])
        {
            for(int i=0;i<5;i++)
                marks[i]=m[i];
        }
        float *getmarks()
        {
            return marks;
        }
        void setGrade(char g)
        {
            grade=g;
        }
        char getGrade()
        {
            return grade;
        }
        College getCollegeObject()
        {
            return cObj;
        }

};

void Student::getStudentDetails()
{
    cout<<"Enter Student ID :"<<endl;
    cin>>id;
    setId(id);
    cout<<"Enter Student Name :"<<endl;
    cin>>name;
    setName(name);
    cout<<"Enter the five subject marks :"<<endl;
    for(int i=0; i<5;i++)
        cin>>marks[i];

    setMarks(marks);   
    return; 
}

void Student::calculateAverage()
{
    int sum =0;
    for(int i=0;i<5;i++)
        sum+=marks[i];

    average = sum/5;
    setAverage(average);

    return ;
}

void Student::findGrade()
{
    if(average>=80 && average<100) grade='O';
    else if(average<80 && average>=50) grade='A';
    else grade='F';
    return ;
}
void Student::displayStudentDetails()
{
    cout<<"Student Name :"<<name<<endl;
    cout<<"Student ID :"<<getId()<<endl;
    cout<<"Principal Name :"<<cObj.getPrincipalName()<<endl;
    cout<<"Average :"<<getAverage()<<endl;
    cout<<"Grade :"<<getGrade()<<endl;
}
int main(void)
{
    Student s1;
    s1.getStudentDetails();
    s1.calculateAverage();
    s1.findGrade();
    s1.displayStudentDetails();

    return 0;
}