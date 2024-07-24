#include<iostream>
using namespace std;
void printsum(int n,int s)
{
    if(n<1)
    {
        cout<<s;
        return;
    }
    printsum(n-1,s+n);
}
int main()
{
    int n;
    cin>>n;
    cout<<"n is :"<<n<<endl;
    /*int s=0;
    for(int i=1;i<=n;i++ )
    {
        s=s+i;
    }
    cout<<s;*/
    printsum(n,0);
   
}
