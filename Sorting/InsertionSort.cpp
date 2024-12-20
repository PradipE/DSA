#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
void printarray(int arr[],int n)
{
    cout<<"Sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    printarray(arr,n);

    return 0;
}