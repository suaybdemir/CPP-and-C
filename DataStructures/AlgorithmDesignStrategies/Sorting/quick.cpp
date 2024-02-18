#include <iostream>

using namespace std;

void swap(int& f,int& s)
{
    int temp = f;
    f = s;
    s = temp;
}

int partition(int arr[],int leftIndex,int rightIndex)
{
    int pivot = arr[rightIndex];
    int store = leftIndex-1;
    for(int i = leftIndex; i<rightIndex ; i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i],arr[++store]);
        }
        
    }
    swap(arr[rightIndex],arr[store+1]);
    return (store+1);
}


void quicksort(int arr[],int leftIndex,int rightIndex)
{
    if(leftIndex<=rightIndex)   
    {
        int pivot = partition(arr,leftIndex,rightIndex);
        quicksort(arr,leftIndex,pivot-1);
        quicksort(arr,pivot+1,rightIndex);
    }
}

int main(void)
{
    int arr[]={5,3,1,4,6,7};
    int arrSize = *(&arr+1)-arr;
    quicksort(arr,0,arrSize-1);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}