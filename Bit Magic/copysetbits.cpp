#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,l,r,y;
	    cin>>x>>l>>r>>y;
	    
	    vector<int> xbinary;
	    vector<int> ybinary;
	    
	    while(x>0)
	    {
	        xbinary.push_back(x%2);
	        x=x/2;
	    }
	    
	    while(y>0)
	    {
	        ybinary.push_back(y%2);
	        y=y/2;
	    }
	    int temp = xbinary.size() - ybinary.size();
	    
	    for (int i=0;i<temp;i++)
	    {
	        ybinary.push_back(0);
	    }
	    for (int i=l+1 ; i<=r+1 ; i++)
	    {
	        if (ybinary[ybinary.size()-i]==1)
	        {
	            xbinary[xbinary.size()-i]=1;
	        }
	    }
	    
	    int ans=0;
	    for (int i=xbinary.size()-1; i>=0; i--)
	    {
	        ans = 2*ans + xbinary[i];
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}
	
	return 0;
}
