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
	    
	    int ans=0;
	    for (int i=1;i<=n;i++)
	    {
	        ans = ans + i*i;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
