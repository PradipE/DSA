#include<iostream>
#include<vector>
using namespace std;
void printF(int in,vector<int>&ans,int arr[],int n)
{
    if(in >=n)
    {
        for(auto i : ans )
        {
          cout<<i<<" ";
        }
        if(ans.size()==0)
        {
           cout<<"{ }";
        }
        cout<<endl;
        return;
    }
    //take the sub sequence or accept the sub sequence 
    ans.push_back(arr[in]);
    printF(in+1,ans,arr,n);
    ans.pop_back();
    //not take the index or not accept the sub sequence
    printF(in+1,ans,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
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
    vector<int>ans;
    printF(0,ans,arr,n);
    return 0;
}