#include <iostream>
using namespace std;
 
class Election 
{
  protected:
   long int totalPeople;
   long int noOfWomen;
   long int noOfMen;
  public:
  
   void setTotalPeople(long int totPeople)
   {
       totalPeople=totPeople;
   }
    void setNoOfWomen(long int womenCount)
   {
       noOfWomen=womenCount;
   }
    void setNoOfMen(long int menCount)
   {
       noOfMen=menCount;
   }
   long int getTotalPeople()
   {
       return totalPeople;
   }
    long int getNoOfWomen()
   {
       return noOfWomen;
   }
    long int getNoOfMen()
   {
       return noOfMen;
   }
    
};
 
class GeneralElection : public Election
{
  public:
   double calcVotePercentage(int partyA , int partyB){
       //Implement your code
       return (((partyA+partyB*100))/getTotalPeople()) ;
   }
   double calcWomenVotePercentage(int womenVotes){
        //Implement your code
        return (womenVotes*100)/getNoOfWomen();
   }
    double calcMenVotePercentage(int menVotes){
        //Implement your code
        return (menVotes*100)/getNoOfMen();
   }
};


// main function
int main()
{  
    GeneralElection ge;
    //Implement your code
    long int totalPeople,noOfWomen,noOfMen;
   int partyA,partyB,womenVotes,menVotes;
   double votePer,womenVotePer,menVotePer;
   cout<<"Enter the number of People:";
   cin>>totalPeople;
   ge.setTotalPeople(totalPeople);
   cout<<"Enter the number of women:";
   cin>>noOfWomen;
   ge.setNoOfWomen(noOfWomen);
   cout<<"Enter the number of men:";
   cin>>noOfMen;
   ge.setNoOfMen(noOfMen);
   cout<<"Enter the total votes by Party A:";
   cin>>partyA;
   cout<<"Enter the total votes by Party B:";
   cin>>partyB;
   cout<<"Enter the number of women votes:";
   cin>>womenVotes;
   cout<<"Enter the number of men votes:";
   cin>>menVotes;

    cout<<endl;

    cout<<"Vote Percentage: "<<100 - ge.calcVotePercentage(partyA,partyB)<<endl;
    cout<<endl;
    cout<<"Women Vote Percentage: "<<ge.calcWomenVotePercentage(womenVotes)<<endl;
    cout<<endl;
    cout<<"Men Vote Percentage :"<<ge.calcMenVotePercentage(menVotes)<<endl;


   return 0;
}