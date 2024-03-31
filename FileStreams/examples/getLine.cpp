#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Boo
{
    protected:
        string address;
    public:
        void getLine(fstream&,int);
};

void Boo::getLine(fstream& file,int lNum)
{
    string line;
    string temp;
    int count = 1;

    while (getline(file, line)) {
        if (lNum == count) {
            temp = line;
            cout << line << endl;
            break; 
        }
        count++;
    }

    for(int i = 0;i< temp.length()-17; i++)
    {
        if(temp[i+2]==':')
        {
            for(int j = 0; j<17 ; j++)
            {
                address += temp[i+j];
            }
            cout<<endl;
            break;
        }
    }

    cout<<"ADDRESS OF MAC SELECTED DEVICE : " << address<<endl; 

}


int main(void)
{
    Boo b;
    cout<<"Write any row num  : "<<endl;
    int num;
    cin>>num;

    fstream file;

    vector<vector<string>> line;

    file.open("db.txt",ios::in);

    b.getLine(file,num);

    file.close();

    return 0;
}