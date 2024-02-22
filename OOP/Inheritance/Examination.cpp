#include <iostream>
using namespace std;
 
class Examination 
{
 protected:
    int passMark=100;
    public:
        void setPassMark(int pMark)
        {
            passMark=pMark;
        }
        int getPassMark()
        {
            return passMark;
        }
    void displayResult(int gradePoint)
    {
        //fill the code here
        if(gradePoint>=passMark) cout<<"Pass"<<endl;
        else cout<<"Fail"<<endl;

        return;
    }
};
 
class ScienceExam  : public Examination
{
  public:
  int  calculateGradePoints(int mark){
    //Implement your code  
        mark*=2;
        return mark;
    }
};

 class MathsExam  : public Examination
 {
  public:
    int  calculateGradePoints(int mark){
        //Implement your code 
        mark *=4;
            return mark;
    }
};

// main function
int main()
{  
    MathsExam me;
    ScienceExam se;
    int smark,mathmark;
   cout<<"Enter the mark in Science:";
   cin>>smark;
   int gradePointScience = se.calculateGradePoints(smark);
    cout<<"Enter the mark in Maths:";
    cin>>mathmark;
    int gradePointMath = me.calculateGradePoints(mathmark);
    //Implement your code 

    cout << "Science:" << endl;
    cout << "Result: ";
    se.displayResult(gradePointScience); // Corrected
    cout << "Gradepoints: " << gradePointScience << endl << endl;

    cout << "Maths:" << endl;
    cout << "Result: ";
    me.displayResult(gradePointMath); // Corrected
    cout << "Gradepoints: " << gradePointMath << endl;
    return 0;
}