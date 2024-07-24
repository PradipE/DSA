#include<iostream>
using namespace std;
int getsum(int n)
{
    int sum =0;
    while(n!=0)
    {
        sum = sum+n%10;
        n=n/10;
    }
    return sum;
}
int recursivegetsum(int n)
{
    if(n==0)
    {
        return n;
    }
    int sum =0;
    sum=sum+n%10;
    return sum+recursivegetsum(n/10);
}
int main()
{
    int n;
    cout<<"Enter the value of n ->"<<endl;
    cin>>n;
    cout<<"The value of n is -> "<<n<<endl;;
    cout<<" The sum of all digit is ->"<<getsum(n)<<endl;
    cout<<" The sum of all digit in rcursive way ->"<<recursivegetsum(n);
   return 0;
}