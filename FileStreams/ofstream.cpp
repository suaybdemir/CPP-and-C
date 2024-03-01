#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream outFile;

    outFile.open("file.txt");

    outFile<<"content"<<endl;

    outFile.close();
    
    return 0;
}