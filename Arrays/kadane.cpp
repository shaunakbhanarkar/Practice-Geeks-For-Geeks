#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int currentMax = a[0];
    int globalMax = a[0];
    
    for (int i=1;i<n;i++)
    {
        currentMax = max(a[i], currentMax + a[i]);
        globalMax = max(currentMax, globalMax);
    }
    
    return globalMax;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	   // int max = a[0];
	   // for (int i=0; i<n;i++)
	   // {
	   //     int sum = 0;
	        
	   //     for (int j=i; j<n; j++)
	   //     {
	   //         sum = sum + a[j];
	   //         if (sum>max)
	   //             max = sum;
	   //     }
	   // }
	    
	   // cout<<max<<endl;
	   
	   cout<<kadane(a,n)<<endl;
	}
	return 0;
}
