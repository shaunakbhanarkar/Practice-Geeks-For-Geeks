#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int l, int r, int x)
{
    if (l<=r)
    {
        int mid = (l+r)/2;
   
        if (a[mid] == x)
            return mid;
        
        if (x<a[mid])
        {
            return binarysearch(a,l,mid-1,x);
        }
        else
        {
            return binarysearch(a,mid+1,r,x);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int x;
    cin>>x;
    
    cout<<binarysearch(a,0,n-1,x)<<endl;
    
    return 0;
}