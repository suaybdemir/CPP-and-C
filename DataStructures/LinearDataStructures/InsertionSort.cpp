#include <iostream>

using namespace std;

void insertion_sort(int arr[],int length);

int main(void)
{
    int arr[]={8,2,7,4,5,1,9,3};
    int length = 8;

    insertion_sort(arr,length);

    for(int i=0; i<length ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

void insertion_sort(int arr[],int length)
{

    for(int i=1; i<length ; i++)
    {
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] >key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
