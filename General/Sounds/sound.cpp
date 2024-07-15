#include <iostream>
#include <windows.h>

int main()
{
    for (int j = 0; j < 4; j++)
    {
        Beep(392, 300);
        for (int i = 0; i < 2; i++)
        {
            Beep(466, 300);
            Beep(587, 300);
        }
    }

    for (int j = 0; j < 4; j++)
    {
        Beep(392, 200);
        Beep(784, 200);
        for (int i = 0; i < 2; i++)
        {
            Beep(466, 200);
            Beep(587, 200);
        }
    }

    for (int j = 0; j < 4; j++)
    {
        Beep(294, 200);
        Beep(587, 200);
        for (int i = 0; i < 2; i++)
        {
            Beep(466, 200);
            Beep(587, 200);
        }
    }

    for (int j = 0; j < 4; j++)
    {
        Beep(311, 200);
        Beep(622, 200);
        for (int i = 0; i < 2; i++)
        {
            Beep(466, 200);
            Beep(587, 200);
        }
    }

    for (int j = 0; j < 4; j++)
    {
        Beep(392, 200);
        Beep(262, 200);
        for (int i = 0; i < 2; i++)
        {
            Beep(466, 200);
            Beep(587, 200);
        }
    }

    Beep(415, 200);
    Beep(523, 200);

    for (int i = 0; i < 4; i++)
    {
        Beep(311, 200);
        for (int j = 0; j < 2; j++)
        {
            Beep(415, 200);
            Beep(622, 200);
        }
    }

    return 0;
}

