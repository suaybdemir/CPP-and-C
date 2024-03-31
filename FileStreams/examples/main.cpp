#include <iostream>
#include <fstream>
using namespace std;


int main(void)
{

    fstream file;

    string line;

    file.open("db.txt",ios::in | ios::app);
    file.fail();

    int sum = 0;

    char ch[255];

    while(true)
    {
        
        if(file.eof()) break; //base condition

        ch[0] = file.get();
        ch[1] = file.get();
        ch[2] = file.get();

        

        if(ch[2]==':')
        {   
            cout<<ch[0]<<ch[1]<<ch[2];
            for(int i = 0; i<15; i++)
            {
                char ch = file.get();
                cout<<ch;
            }
            cout<<endl;
        }
        
    }   

    file.close();


    return 0;
}