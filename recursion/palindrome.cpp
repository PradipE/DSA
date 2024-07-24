#include<bits/stdc++.h>
using namespace std;

int ispalindrome(string s)
{
    string a=s;
    reverse(a.begin(),a.end());
    if(s==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
bool palindrome(string s,int i,int n)
{
   
 if(i>=n/2)
 {
    return true;
 }
 if(s[i]!=s[n-i-1])
 {
   return false;
 }
 return palindrome(s,i+1,n);

}
int main()
{
    

    string str;
    cin>>str;
    int n = str.length();
    cout<<" String is -> "<<str<<endl;
    //int start =0;
    //int end = str.length()-1;
    if(palindrome(str,0,n))
    {
        cout<<"It's a palindrome";
    }
    else
    {
        cout<<"It's not a palindrome";
    }
    
    return 0;
}