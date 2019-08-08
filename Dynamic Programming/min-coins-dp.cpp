#include<bits/stdc++.h>
using namespace std;

int minCoins(long coins[], long n, long v)
{
    // if (v==0)
    //     return 0;
        
    // int res = INT_MAX;
    
    // for (int i=0; i<n; i++)
    // {
    //     if (coins[i]<=v)
    //     {
    //         int temp = minCoins(coins,n,v-coins[i]);
            
    //         if (temp != INT_MAX && temp + 1 < res)
    //             res = temp + 1;
    //     }
    // }
    
    // return res;
    
    int dp[v+1];
    
    dp[0] = 0;
    
    for (int i=1; i<=v; i++)
    {
        dp[i] = INT_MAX;
    }
    
    for (int i=1; i<=v; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (coins[j] <= i)
            {
                int temp = dp[i-coins[j]];
                
                if (temp != INT_MAX && temp + 1 < dp[i])
                    dp[i] = temp + 1;
            }
        }
    }
    if (dp[v] == INT_MAX)
        return -1;
    return dp[v];
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    long v, n;
	    cin>>v>>n;
	    
	    long coins[n];
	    
	    for (long i=0; i<n; i++)
	    {
	        cin>>coins[i];
	    }
	    
	    cout<<minCoins(coins,n,v)<<endl;
	}
	return 0;
}
