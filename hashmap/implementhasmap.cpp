#include<bits/stdc++.h>
using namespace std;
// we have a arr [1,2,1,2,3,2,4,3,5]
//  Find how many time 1, 2
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>> arr[i];
  }
  //create the hash arr to track the list
  int hasharr[20]={0};
  for(int i=0;i<n;i++)
  {
    hasharr[arr[i]]+=1;

  }

  //for search the element those who are present in arr
  int queary;
  cin>> queary;
  while(queary--)
  {
    int number;
    cin>>number;
    cout<<hasharr[number]<<endl;
  }
  return 0;
}