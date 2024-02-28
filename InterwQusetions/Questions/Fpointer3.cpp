#include <iostream>
using namespace std;

int compare(const void*p, const void*q)
{
    int l = *(const int*)p;
    int r = *(const int*)q;
    return l<r;
}

int main(void)
{
    int arr[5] = {3,2,4,1,5};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int elementSize = sizeof(arr[0]);

    qsort(arr,arrSize,elementSize,compare);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
}