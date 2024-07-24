#include<iostream>
using namespace std;

void  subset(string &s,string a ="",int i=0 )
{
  if(i == s.length())
  {
    cout<<s;
    return;
  }
  subset(s,a,i+1);
  subset(s,a+s[i],i+1);

}
int main()
{
    string s;
    cin>>s;
    cout<<"\n String is ->"<<s;
    //subset(s,"",0);
  return 0;
}