#include <bits/stdc++.h>
using namespace std;
void LongestSubarray(int *arr, int k, int n)
{
    int MaxLen = 0;
    int sum = 0;
    int l = 0;
  
    for (int r = 0; r < n; r++)
    {
        sum = sum + arr[r];

        while (sum > k && l<=r)
        {
            sum = sum - arr[l];
            l++;
        }

        if (sum <= k)
        {
            MaxLen = max(MaxLen, r - l + 1);
        }
    }

    cout <<"Max Length is "<<MaxLen<<endl;
}

int main()
{

    int arr[] = {1,2,3,6,9,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;

    LongestSubarray(arr, k, n);
}