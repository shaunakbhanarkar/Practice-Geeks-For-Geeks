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
	    
	    string ans ="Yes";
	    for (int i=0;i<s.size()/2;i++)
	    {
	        if (s[i]!=s[s.size()-i-1])
	        {
	            ans = "No";
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}
