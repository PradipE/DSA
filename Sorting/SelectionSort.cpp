#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]< arr[minindex])
            {
                 minindex=j;
            }

        }
        swap(arr[minindex],arr[i]);
    }
    
}
int main()
{
    //int put a array
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


return 0;

}