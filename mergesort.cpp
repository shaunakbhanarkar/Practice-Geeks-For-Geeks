#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int r, int m)
{
    int temp1[m-l+1];
    int temp2[r-m];
    
    for (int i=l;i<=m;i++)
    {
        temp1[i-l] = a[i];
    }
    
    for (int i=m+1; i<=r ; i++)
    {
        temp2[i-m-1] = a[i];
    }
    
    int temp[r-l+1];
    
    int p1,p2,p;
    
    p1 = 0;
    p2 = 0;
    p = 0;
    
    bool f1,f2;
    f1 = true;
    f2 = true;
    
    while(p<=r-l)
    {
        if (p1<=m-l)
            f1 = true;
        else
            f1 = false;
        
        if (p2<=r-m-1)
            f2 = true;
        else
            f2 = false;
        
        if (f1 && f2)
        {
            if (temp1[p1]<temp2[p2])
            {
                temp[p] = temp1[p1];
                p1++;
            }

            else
            {
                temp[p] = temp2[p2];
                p2++;
            }
            p++; 
        }
        else if (f1 && !f2)
        {
            temp[p] = temp1[p1];
            p1++;
            p++;
        }
        else if (!f1 && f2)
        {
            temp[p] = temp2[p2];
            p2++;
            p++;
        }
        else
        {
            break;
        }
    }
    
    for (int i=l; i<=r;i++)
    {
        a[i] = temp[i-l];
    }
}

void mergesort(int a[], int l, int r)
{
    if (r>l)
    {
        int m = (l + r )/ 2;
    
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,r,m);
    }
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        mergesort(a,0,n-1);
        
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}