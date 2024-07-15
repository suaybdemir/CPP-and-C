#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;

int main(void)
{
    ofstream outFile;
    ifstream inFile;

    outFile.open("file.txt",ios::app);
    
    try
    {
        if(outFile.is_open())
        {
            cout<<"File opened succesfully!"<<endl;

            string line;

            cout<<"Enter"<<endl;
            getline(cin,line);

            outFile<<line<<endl;

            outFile.close();

        }
        else throw runtime_error("Unable to open file for writing.");

        outFile.open("file.txt", ios::trunc);

        if(!outFile.is_open())
        {
            throw runtime_error("Unable to open file for truncation.");
        }
        outFile.close(); // File is now empty

        inFile.open("file.txt");

        if(inFile.is_open())
        {
            string line;
            while(getline(inFile,line))
            {
                cout<<line<<endl;
            }
            inFile.close();
        }
        else throw runtime_error("Unable to open file for reading.");
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



    
    return 0;
}