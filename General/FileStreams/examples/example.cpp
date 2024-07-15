#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void getLine(fstream& file,int lNum)
{
    string temp;
    string line;
    int count = 1;

    while(getline(file,line))
    {
        if(lNum==count)
        {
            temp = line;
            cout<<line<<endl;
            break;
        }
        count++;
    }

    for(int i = 0;i< temp.length(); i++)
    {
        if(temp[i+2]==':')
        {
            for(int j = 0; j<14 ; j++)
            {
                cout<<temp[i+j];
            }
            cout<<endl;
            break;
        }
    }
}


int main(void)
{
    
    cout<<"Write any row num  : "<<endl;
    int num;
    cin>>num;

    fstream file;

    vector<vector<string>> line;

    file.open("db.txt",ios::in);

    getLine(file,1);

    file.close();

    return 0;
}