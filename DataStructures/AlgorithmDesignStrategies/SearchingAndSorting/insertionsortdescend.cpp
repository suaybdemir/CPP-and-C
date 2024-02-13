#include <iostream>

using namespace std;

int main(void)
{
	
	return 0;
}

void insertionSort(int arr[])
{
	int length = sizeof(arr)/sizeof(0);
	
	for(int i=1; i<length-1;i++)
	{
		item = arr[i];
		j=i;
		while(j>0 && arr[j-1]>item)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=item;
	}
	return 0;
}
