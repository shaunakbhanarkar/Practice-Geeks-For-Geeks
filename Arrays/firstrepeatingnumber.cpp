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
	    
	    int a[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    
	    int ans=n;
	    
	    
	    for (int i=1;i<n;i++)
	    {
	        for (int j=0; j<i;j++)
	        {
	            if (a[i]== a[j])
	            {
	                ans=j;
	                goto label;
	            }
	        }
	    }
	    label:  if (ans==n)
	                ans = -1;
	   cout<<ans<<endl;
	    
	    
	    
	}
	return 0;
}
