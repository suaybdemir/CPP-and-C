#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int associateId;
        string associateName;
        string workStatus;
    public:
    //Include necessary methods 
        int getAssociateId()
        {
            return associateId;
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
            associateId=id;
        }
        void setAssociateName(string name)
        {
            associateName=name;
        }
        void updateStatusDetails(int days)
        {
            if(days<=20)
            {
                setWorkStatus("Core skills");
            }
            else if(days>20 && days <=40)
            {
                setWorkStatus("Advanced skills");
            }
            else
            {
                setWorkStatus("Project phase");
            }
        }
        void setWorkStatus(string ws)
        {
            workStatus=ws;
        }
        
};


int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of code skeleton 
    Employee e;
    int id;
	string name;
	int days;
	cout<<"Enter the associate id:";
	cin>>id;
	e.setAssociateId(id);
	cout<<"Enter the associate name:";
	cin>>name;
	e.setAssociateName(name);
	cout<<"Enter the number of days:";
	cin>>days;
    e.updateStatusDetails(days);
    //Fill the code here 
    cout<<"The associate "<<e.getAssociateName()<<" work status: "<<e.getWorkStatus()<<endl;
    return 0;
}

