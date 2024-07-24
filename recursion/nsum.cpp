#include<iostream>
using namespace std;

int sum(int n)
{
    int s=0;
    if(n==1)
    {
        return n;
    }
    return s+sum(n-1);
}
int main()
{
   int n;
   cin>>n;
   int ans=sum(n);
   cout<<ans;
}