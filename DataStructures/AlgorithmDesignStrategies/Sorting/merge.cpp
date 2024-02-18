#include <iostream>

using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int leftSize = mid - low +1 ;
    int rightSize = high-mid;

    int leftArr[leftSize];
    int rightArr[rightSize];

    for(int i = 0 ; i<leftSize; i++)
    {
        leftArr[i]=arr[low+i];
    }
    for(int j=0;j<rightSize; j++)
    {
        rightArr[j]=arr[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i< leftSize && j< rightSize)
    {
        if(leftArr[i]< rightArr[j])
        {
            arr[k]=leftArr[i];
            i++;
        }
        else{
            arr[k]=rightArr[j];
            j++;
        }
        k++;
    }

    while(i < leftSize)
    {
        arr[k]=leftArr[i];
        i++;
        k++;
    }
    while(j< rightSize)
    {
        arr[k]=rightArr[j];
        j++;
        k++;
    }
   
}

void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(void)
{
    int arr[]={8,3,1,4,6,9,10};
    int high = *(&arr+1) - arr;
    mergeSort(arr,0,high-1);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}