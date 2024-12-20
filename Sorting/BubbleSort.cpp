#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
    cout<<"Sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void BubbleSort(int arr[],int n)
{
    for(int i=n-1; i>=0;i--)
    {
       // printarray(arr,n);
        for(int j=0 ;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);

            }
             
        }
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
    BubbleSort(arr,n);
    printarray(arr,n);
    return 0;
}