#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "header.h"
#include <initializer_list>

/*int isValid(int value, initializer_list<int> validValues)
{
    for(int validValue : validValues)
    {
        if(value == validValue)
        {
            return value;
        }
    }   
    return -1;
}*/

int main(void)
{
    int choice;
    char searchName[20];
    int searchResult=0;

    menu();

    do{
        cout<<endl;
        cout<<"Enter a num"<<endl;
        cin>>choice;
        cout<<endl;
        /*
        try
        {
            if(!isValid(choice,{1,2,3,4}))
            {
                throw runtime_error("Is not Valid! Choice has to be 1,2,3 or 4");
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
        }
        */

        switch(choice)
        {
            case 1: 
                if(phoneAdd()==0)
                {
                    cout<<"\n Phone number hasn't succesfully added\n";
                }
                else cout<<"\n Phone number has succesfully added\n"; 
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                 exit(0);
            default: cout<<"Is not Valid! Choice has to be 1,2,3 or 4"<<endl;
        }

        
    } while (choice!=4);
    


    return 0;
}
