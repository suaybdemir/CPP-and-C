#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        int associatedId;
        string associateName;
        string workStatus;

    public:

        int getAssociateId()
        {
            return associatedId;
        }
        string getAssociateName()
        {
            return associateName;
        }
        string getWorkStatus()
        {
            return workStatus;
        }


        void setAssociateId(int id)
        {
            associatedId=id;
        }
        void setAssociateName(string name)
        {
            associateName=name;
        }
        void setWorkStatus(string status)
        {
            workStatus=status;
        }

        void updateStatusDetails(int days)
        {
            if(days<=20)
                setWorkStatus("Core Skills");
            else if(days>20)
                setWorkStatus("Advanced modules");
            else
                setWorkStatus("Project phase");
        }
};

int main(void)
{
    int id;
    string name;
    int days;

    cout<<"Enter the associate id:";
    cin>>id;
    cout<<"Enter the associate name:";
    cin>>name;
    cout<<"Enter the number of days:";
    cin>>days;

    Employee e1;
    e1.setAssociateId(id);
    e1.setAssociateName(name);
    e1.updateStatusDetails(days);

    cout<<"The associate "<<e1.getAssociateName()<<"'s work status : "<<e1.getWorkStatus()<<endl;
    
    return 0;
}