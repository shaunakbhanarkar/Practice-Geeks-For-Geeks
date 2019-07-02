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
	    
	    vector<long> v1(n);
	    vector<long> v2(n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v1[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v2[i];
	    }
	    
	    sort(v1.begin(),v1.end());
	    
	    sort(v2.begin(),v2.end());
	    
	    bool ans = true;
	    for (int i=0; i<n; i++)
	    {
	        if (v1[i]!=v2[i])
	        {
	            ans = false;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
