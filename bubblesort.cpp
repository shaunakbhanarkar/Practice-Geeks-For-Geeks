#include<bits/stdc++.h>
using namespace std;

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
        
        for (int i=0; i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if((i<j && a[i]>a[j]) || (i>j && a[i]<a[j] ))
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}