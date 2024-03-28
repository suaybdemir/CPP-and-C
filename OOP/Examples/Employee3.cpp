#include <iostream>
#include <utility>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        string associateName;
        string workStatus;
    public:
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
        }
        void setAssociateName(string name)
        {
            associateName=std::move(name);
        }
        void updateStatusDetails(int days)
        {
            if(days<=20)
            {
                setWorkStatus("Core skills");
            }
            else if(days <= 40)
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
            workStatus=std::move(ws);
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

