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
	    
	    vector<int> v(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	   // sort(v.begin(),v.end());
	    
	    int ans = 0;
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            for (int z=0;z<n;z++)
	            {
	                if (i!=j && j!=z && z!=i)
	                {
	                    if (v[i]+v[j]+v[z] == k)
	                    {
	                        ans = 1;
	                        goto label;
	                    }
	                }
	            }
	        }
	    }
	    label:
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
