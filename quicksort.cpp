#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    
    int i = l - 1;
    
    for (int j=l; j<=r-1; j++)
        
    {
        if (a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[r],a[i+1]);
    
    return i+1;
}

void quicksort(int a[], int l, int r )
{
    if (l<r)
    {
        int p = partition(a,l,r);

        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for (int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    
    
    quicksort(a,0,n-1);
    
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}