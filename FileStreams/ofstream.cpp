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

            outFile<<"content"<<endl;

            double  x = 4.5;
            int y = 10;
            string z = "abc";

            outFile<<x<<endl<<y<<endl<<z<<endl;

            outFile.close();

        }
        else throw runtime_error("Unable to open file for writing.");  

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