#include<stdio.h>

int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int patitation(int arr[],int f,int l)
{
    int pivot =arr[f];
    int p = f+1;
    int q=l;
    int temp;

    do
    {
      while (arr[p]>=pivot)
      {
        p++;
      }
      while (arr[q]<=pivot)
      {
        q--;
      }
      if(p<q)
      {
        temp =arr[p];
        arr[p]=arr[q];
        arr[q]=temp;
      }
      
    } while (p<q);
    temp =arr[f];
    arr[f]=arr[q];
    arr[q]=temp;
    return q;
    
}
int quicksort(int arr[],int f,int l)
{
    int patationindex;
    if(f<l)
    {

    patationindex=patitation(arr,f,l);
    quicksort(arr,f,patationindex-1);
    quicksort(arr,patationindex+1,l);
   }
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int arr[n];
    printf("The array is :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    printarray(arr,n);
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}