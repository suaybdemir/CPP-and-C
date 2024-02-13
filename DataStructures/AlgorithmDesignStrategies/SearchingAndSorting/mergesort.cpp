#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr,int left,int mid,int right)
{
    int n1 = mid -left +1;
    int n2 =right-mid;

    vector<int> L(n1),R(n2);

    for(int i=0 ; i< n1 ; i++)
    {
        L[i]= arr[left+i];
    }
    for(int j=0; j<n2 ; j++)
    {
        R[j]=arr[mid+1+j];
    }

    int i=0,j=0, k=left;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k++]=L[i++];
    }

    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}

void mergeSort(vector<int>& arr,int left, int right)
{
    if(left<right)
    {
        int mid = left + (right-left)/2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}

int main(void)
{
    vector<int> arr = {12,11,13,5,6,7};
    int arr_size = arr.size();

    mergeSort(arr,0,arr_size-1);

    for(int i : arr)
    {
        cout<<i<<" ";
    }

    return 0;
} 
