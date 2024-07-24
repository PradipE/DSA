#include<iostream>
#include<vector>
using namespace std;
void printF(int in,vector<int>&ans,int s,int sum,int arr[],int n)
{
    if(in >=n)
    {   
        if(s==sum)
        {
        for(auto i : ans )
        {
          cout<<i<<" ";
        }
        cout<<endl;
        
        } 
        return;
    }
    //take the sub sequence or accept the sub sequence 
    ans.push_back(arr[in]);
    s+=arr[in];
    printF(in+1,ans,s,sum,arr,n);
    s-=arr[in];
    ans.pop_back();
    //not take the index or not accept the sub sequence
    printF(in+1,ans,s,sum,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>ans;
    int sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The arr is-> ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    printF(0,ans,0,sum,arr,n);
    return 0;
}