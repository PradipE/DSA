#include <iostream>
#include<unordered_map>
using namespace std;
/*int repcharacter(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
             if(s[i]==s[j])
             {
                return i;
             }
        }
    }
}*/
int repcharacter(string &s)
{
    unordered_map<char,int>count;
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]] >1)
        {
            return i;
        }
    }
      
    return -1;


}
int main()
{
    string s;
    cin>>s;
    cout<<"Name is :"<<s<<endl;
    int ans=repcharacter(s);
    cout<<"ans is: "<<ans<<endl;
    return 0;
}