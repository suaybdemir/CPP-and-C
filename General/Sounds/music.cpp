#include <iostream>
#include <Windows.h>
#include <mmystem.h>
using namespace std;

#pragma comment(lin, "winm.lib")

int main()
{
	PlaySound(TEXT("song.waw"),NULL,SND_FILENAME | SND_SYNC);
	system("pause");
	return 0;
}
