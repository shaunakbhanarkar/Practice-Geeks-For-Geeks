#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int k;
	    cin>>k;
	    
	    int ans = -1;
	    
	    
	    int a[n];
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            if (i!=j && abs(a[i]-a[j])==k)
	            {
	                ans = 1;
	                goto label;
	            }
	        }
	    }
	    label:
	    cout<<ans<<endl;
	}
	return 0;
}
