#include <bits/stdc++.h>
using namespace std;

void slidingWindow(int arr[], int k, int n)
{

    if (k > n)
    {
        cout << "Window size is bigger then the array size " << endl;
    }
    int sum = 0;
    int l = 0;
    int h = k - 1;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;

    while (h < n-1)
    {
        sum = sum - arr[l];//here we shift window by 1 ans minues the the low
        l++;//low increase by 1
        h++;//high increse by one
        sum = sum + arr[h];// here we shift window by one and add one new element
        maxsum = max(maxsum,sum);
    }

    cout<<"This Maxium window sum of this array is "<<maxsum<<endl;
}

int main()
{
    int arr[] = {-1,2,3,4,5,-3};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    slidingWindow(arr, k,n);

    return 0;
}