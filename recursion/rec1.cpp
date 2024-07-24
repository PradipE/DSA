#include<iostream>
using namespace std;
void rec(int n)
{
    if(n<1)
    {
        return;
    }
    else{
        cout<<n;
        rec(n-1);
        cout<<n;
    }
}
int main()
{
    int n;
    cin>>n;
    rec(n);

}