#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int n, int v)
{
    if (v==0)
        return 0;
        
    int res = INT_MAX;
    
    for (int i=0; i<n; i++)
    {
        if (coins[i]<=v)
        {
            int temp = minCoins(coins,n,v-coins[i]);
            
            if (temp != INT_MAX && temp + 1 < res)
                res = temp + 1;
        }
    }
    
    return res;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int v, n;
	    cin>>v>>n;
	    
	    int coins[n];
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>coins[i];
	    }
	    
	    cout<<minCoins(coins,n,v)<<endl;
	}
	return 0;
}
