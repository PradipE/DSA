#include<iostream>
#include<vector>
using namespace std;
/*void reversearray(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
       swap(arr[s],arr[e]);
       s++;
       e--;
    }

}
void reversearrayrec(int arr[],int s,int e)
{
    
    if(s>=e)
    {
        return;
    }
    swap(arr[s],arr[e]);
    reversearrayrec(arr,s+1,e-1);

}*/
void reversearrayrec(int i,int arr[],int n)
{
    
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reversearrayrec(i+1,arr,n);

}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
  
   cout << endl;
} 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The reversearray is ->";
    
    /*reversearray(arr,n);*/
    reversearrayrec(0,arr,n);
    printArray(arr,n);
    return 0;
}