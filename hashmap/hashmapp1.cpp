#include<bits/stdc++.h>
using namespace std;

int main() {
    //input arr 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    
    //map creation
    map<char,int>mapping;
    for(int i=0;i<s.size();i++)
    {
        mapping[s[i]]++;
    }
    // lets check
    int ans;
    cin>>ans;
    while(ans--)
    {
        char data;
        cin>>data;
        cout<<mapping[data]<<endl;
    }

    return 0;
}