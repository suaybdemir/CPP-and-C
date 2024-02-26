#include <iostream>
using namespace std;

class MonthlyExpense
{
    private:
        double household_exp;
        double medical;

    public:
        void setHouseHoldExpense(double houseExp)
        {
            household_exp=houseExp;
        }
        void setMedicalExpense(double medical)
        {
            this->medical=medical;
        }
        double calculateNovemberMonthExpense()
        {
            return household_exp + medical;
        }
        double calculateDecemberMonthExpense()
        {
            return household_exp + medical;
        }
        double calculateTotalExpense()
        {
            return household_exp + medical;
        }
        MonthlyExpense operator + (const MonthlyExpense b)
        {
            MonthlyExpense expense;
            expense.household_exp = household_exp + b.household_exp;
            expense.medical = medical + b.medical;
            return expense;
        }
};

int main(void)
{
    MonthlyExpense budget1;
    MonthlyExpense budget2;
    MonthlyExpense budget3;
    double expenses = 0.0;
    double n1,n2,d1,d2;

    cout<<"Enter the House hold expense of November (in $) : ";
    cin>>n1;
    cout<<"Enter the Medical expense of November (in $) : ";
    cin>>n2;
    cout<<"Enter the House hold expense of December (in $) : ";
    cin>>d1;
    cout<<"Enter the Medical expense of December (in $) : ";
    cin>>d2;

    budget1.setHouseHoldExpense(n1);
    budget1.setMedicalExpense(n2);

    budget2.setHouseHoldExpense(d1);
    budget2.setMedicalExpense(d2);

    expenses = budget1.calculateNovemberMonthExpense();
    cout<<"November Expenses : "<<expenses<<endl;

    expenses = budget2.calculateDecemberMonthExpense();
    cout<<"December Exenses : "<<expenses<<endl;

    budget3 = budget1 + budget2 ;
    expenses = budget3.calculateTotalExpense();
    cout<<"Total Expenses for the month of Nov and Dec (in $) : "<<expenses<<endl;
    
    return 0;
}