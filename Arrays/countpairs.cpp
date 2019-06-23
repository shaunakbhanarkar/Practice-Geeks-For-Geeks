#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> v (n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    int count=0;
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            if (v[j]==k-v[i] && i!=j)
	                count++;
	        }
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}
