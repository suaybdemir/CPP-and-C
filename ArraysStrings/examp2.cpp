#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string str2;

    cout << "Inmate's name : ";
    getline(cin, str);

    cout << "\nInmate's father's name : ";
    getline(cin, str2);

    bool flag = true;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
        else if (!(str[i] >= 'A' && str[i] <= 'Z') && !isspace(str[i]))
        {
            flag = false;
            break;
        }
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            str2[i] = toupper(str2[i]);
        }
        else if (!(str2[i] >= 'A' && str2[i] <= 'Z') && !isspace(str2[i]))
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << "INVALID NAME";
    }
    else
    {
        cout << str << " " << str2;
    }

    return 0;
}

