#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int ans1=0;
	    int ans2=0;
	    
	    for (int i=0;i<s.size();i++)
	    {
	        if (i%2==0 && s[i]=='0')
	        {
	            ans1++;
	        }
	        else if (i%2==1 && s[i]=='1')
	        {
	            ans1++;
	        }
	    }
	    
	    for (int i=0;i<s.size();i++)
	    {
	        if (i%2==1 && s[i]=='0')
	        {
	            ans2++;
	        }
	        else if (i%2==0 && s[i]=='1')
	        {
	            ans2++;
	        }
	    }
	    
	    cout<<min(ans1,ans2)<<endl;
	    
	    
	}
	return 0;
}
