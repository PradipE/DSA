#include<iostream>
#include<math.h>
using namespace std;
int maxcut(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }
   int reasult = max(maxcut(n-a,a,b,c),maxcut(n-b,a,b,c),maxcut(n-c,a,b,c));
   if(reasult ==-1)
   {
    return -1;
   }
   return (reasult+1);

}
int main()
{
    int n,a,b,c;
    cout<<"Enter the value of n and a and b and c ->";
    cin>>n>>a>>b>>c;
    cout<<"N is-> "<<n<<", "<<"a is-> "<<a<<", "<<"b is -> "<<b<<", "<<"c is -> "<<c<<endl;
    cout<<maxcut(n,a,b,c)<<endl;

    return 0;
}