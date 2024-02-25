#include <iostream>
using namespace std;
 
class RuralManagement {
  protected:
  int acceptedSchemes;
  
  public:
    int getAcceptedSchemes(){
        return acceptedSchemes;
    }
    void setAcceptedSchemes(int noOfSchemes){
        acceptedSchemes=noOfSchemes;
    }
    void calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
        acceptedSchemes= noOfSchemes - noOfSchemesRejected;
   }
    
};
 
class RevenueManagement  
{
  protected:
    double totalRevenue;
  public:
    double getTotalRevenue(){
        return totalRevenue;
    }
    void setTotalRevenue(double revenue){
        totalRevenue=revenue;
    }
    void calcTotalRevenue(int noOfTerritoriess,double revenue){
        setTotalRevenue(noOfTerritoriess * revenue);
   }
};
class SchemeManagement : public RuralManagement, public RevenueManagement
{
  public:
   double allotMoneyPerScheme(){
      return getTotalRevenue()/getAcceptedSchemes();
   }
};

// main function
int main()
{ 
  SchemeManagement sm;
    int rejected,schemes,territories;
   double revenue;
   cout<<"Enter number of territories :"<<endl;
   cin>>territories;
   cout<<"Enter revenue :"<<endl;
   cin>>revenue;
   cout<<"Enter total number of schemes :"<<endl;
   cin>>schemes;
   cout<<"Enter number of schemes rejected :"<<endl;
   cin>>rejected;

   sm.calcNoOfSchemes(schemes,rejected);
   sm.calcTotalRevenue(territories,revenue);

   cout<<"Money alotted per scheme : "<<sm.allotMoneyPerScheme()<<endl;
  //Implement your code here
  return 0;
}