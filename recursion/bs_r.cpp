#include<iostream>
using namespace std;
int bs(int arr[],int s,int e,int &k)
{
    int mid =(s+e)/2;
    if(arr[mid] == k)
    {
        return mid;
    }
    if(arr[mid]>k)
    {
        return bs(arr,s,mid-1,k);
    }
    else
    {
        return bs(arr,mid+1,e,k);
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i =0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"array list is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    cout<<endl; 
    
    int ans = bs(arr,0,n,k);
    if(ans == -1)
    {
        cout<<"Element not found";
    }
    else{
        cout<<"Element is found";
    }
return 0;
}