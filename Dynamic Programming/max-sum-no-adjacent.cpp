#include<bits/stdc++.h>
using namespace std;

int solve (vector<int> v)
{
    int dp[v.size()];
    
    dp[0] = v[0];
    dp[1] = max(v[0],v[1]);
    
    for (int i=2;i<v.size();i++)
    {
        dp[i] = max(v[i]+dp[i-2] , dp[i-1]);
    }
    return dp[v.size()-1];
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
	    
	    vector<int> v(n);
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    
	    cout<<solve(v)<<endl;
	    
	}
	return 0;
}
