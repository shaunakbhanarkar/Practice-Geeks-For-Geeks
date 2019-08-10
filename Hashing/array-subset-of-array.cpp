#include<bits/stdc++.h>
using namespace std;
#define N 100000
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a[N] = {0};
	    int n,m;
	    cin>>n>>m;
	    for (int i=0; i<n; i++)
	    {
	        int x;
	        cin>>x;
	        a[x-1]++;
	    }
	    string ans = "Yes";
	    for (int i=0; i<m; i++)
	    {
	        int x;
	        cin>>x;
	        if (a[x-1]==0)
	            ans = "No";
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
