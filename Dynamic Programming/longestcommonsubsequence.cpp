#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int m, int n)
{
    /* recursive solution */
    
    // if (m==0 || n==0)
    //     return 0;
    
    // if (x[m-1] == y[n-1])
    //     return 1 + lcs(x,y,m-1,n-1);
    
    // return max(lcs(x,y,m-1,n) , lcs(x,y,m,n-1));
    
    /* dp solution */
    
    int dp[m+1][n+1];
    
    for (int i=0;i<=m;i++)
    {
        dp[i][0] = 0;
    }
    
    for (int j=0;j<=n;j++)
    {
        dp[0][j] = 0;
    }
    
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (x[i-1] == y[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max (dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    
    return dp[m][n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    string x,y;
	    cin>>x>>y;
	    
	    cout<<lcs(x,y,m,n)<<endl;
	}
	return 0;
}
