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
        
        for (int i=0;i<n;i++)
        {
            //find min from j=i to j=n-1
            int min_index = i;
            
            for (int j=i+1;j<n;j++)
            {
                if (a[min_index] > a[j])
                    min_index = j;
            }
            
            //swap
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
            
        }
        
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}