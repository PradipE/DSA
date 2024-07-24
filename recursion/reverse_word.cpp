#include<iostream>
#include<vector>
using namespace std;
void reverse( char s[],int h,int l)
{
     while(l<h)
     {
        swap(s[l],s[h]);
        l++;
        h--;
     }
}
void reverseword(char s[],int n)
{
    int st=0;
    for(int e=0;e<n;e++)
    {
        if(s[e] == ' ')
        {
            reverse(s,st,e-1);
            st=e+1;
        }
    }
    reverse(s,st,n-1);
    reverse(s,0,n-1);
}

int main()
{
    char str[]="pradip mondal";
    int size=sizeof(str)/sizeof(str[0]);
    char ans =reverseword(str,size);
    



    return 0;

}s