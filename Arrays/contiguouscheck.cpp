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
	    
	    vector<int> v(n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    string ans="Yes";

	    
	    for (int i=0;i<v.size()-1;i++)
	    {
	        if (!(v[i]==v[i+1] || v[i]+1==v[i+1]))
	            ans = "No";
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
