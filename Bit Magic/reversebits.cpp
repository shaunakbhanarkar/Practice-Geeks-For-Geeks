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
	    
	    int i=0;
	    
	    long ans = 0;
	    while (n>0)
	    {
	        ans = 2*ans + n%2;
	        n=n/2;
	        i++;
	    }
	    if (i<32)
	    {
	        ans = ans * pow(2,32-i);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
