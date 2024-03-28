#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main(void)
{
    fstream file;

    vector<vector<string>> line;

    file.open("test.txt",ios::out);
    file.fail();

    file << "Welcome!"<<endl;

    file.close();

    file.open("test.txt",ios::in);
    file.seekg(5);

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();


    return 0;
}