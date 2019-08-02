#include<bits/stdc++.h>
using namespace std;

int eggdrop(int n, int k)
{
    int egg[n+1][k+1];
    
    for (int i=0;i<=n;i++)
    {
        egg[i][0] = 0;
        egg[i][1] = 1;
    }
    
    for (int i=0;i<=k;i++)
    {
        egg[1][i] = i;
    }
    
    for (int i=2; i<=n; i++)
    {
        for (int j=2; j<=k; j++)
        {
            egg[i][j] = INT_MAX;
            for (int x=1; x<=j; x++)
            {
                int res = 1 + max(egg[i-1][x-1],egg[i][j-x]);
                if (egg[i][j] > res)
                    egg[i][j] = res;
            }
        }
    }
    return egg[n][k];
    
    
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    cout<<eggdrop(n,k)<<endl;
	}
	return 0;
}
