#include<iostream>
#include<algorithm>
using namespace std;
bool anagram(string &s1,string &s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    sort(s1.begin(),s2.end());
    sort(s2.begin(),s2.end());
    if(s1 == s2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<"S1 is->"<<s1<<endl;
    cout<<"S2 is->"<<s2<<endl;
    cout<<anagram(s1,s2);
    return 0;
}