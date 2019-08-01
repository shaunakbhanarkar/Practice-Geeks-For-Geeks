#include<bits/stdc++.h>
using namespace std;

bool search(string s, int i, string p)
{
    for (int j=0;j<p.size();j++)
    {
        if (p[j] != s[i+j])
            return false;
    }
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    string p;
	    cin>>s;
	    cin>>p;
	    
	    string ans = "not found";
	    
	    for (int i=0;i<=s.size()-p.size();i++)
	    {
	        if(search(s,i,p))
	        {
	            ans = "found";
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
