// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    //create the hash arr
    int hasharr[20]={0};
    for(int i=0;i<n;i++)
    {
        hasharr[arr[i]] +=1;
        
    }
    //print the array data thats are apperar how many times
    int print ;
    cin>>print;
    while(print--)
    {
        int data;
        cin>>data;
        
        cout<<hasharr[data]<<endl;
    }

    return 0;
}