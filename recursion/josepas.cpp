#include<iostream>
using namespace std;
int josepas(int n,int k)
{
  if(n == 1)
  {
    return 0;
  }
   
   
   return (josepas(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cout<<"Enter the value of n and k-> ";
    cin>>n>>k;
    cout<<"The value of n is -> "<<n<<","<<"The value of k is -> "<<k<<endl;
     cout<<josepas(n,k);
    return 0;
}
