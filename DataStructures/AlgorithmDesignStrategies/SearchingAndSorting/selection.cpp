#include <iostream>

using namespace std;

int main(void)
{
	int arr[]={9,1,4,7,9,322,65,2,1};
	int length = sizeof(arr)/sizeof(0);
	selection_sort(arr,length);
	return 0;	
}

void selection_sort(int list[],int n)
{

	for(int i=0 ; i<n-1; i++)
	{
		int min = i;
		for(j=i+1;j<n;j++)
		{
			if(list[j]<list[min])
			{
				min=j;
			}
		}
	
		if(min!=i)
		{
			int tmp = list[min];
			int list[min]=list[i];
			int list[i]=tmp'
		}
	
	}
}
