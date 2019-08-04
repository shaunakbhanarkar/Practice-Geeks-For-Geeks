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
	    char ans;
	    bool flag = false;
	    for (int i=0;i<s.size();i++)
	    {
	        for (int j=i+1;j<s.size();j++)
	        {
	            if (s[i] == s[j])
	               {
	                   ans = s[i];
	                   flag = true;
	                   goto label;
	               }
	        }
	    }
	    
	    label: if (flag)
	    {
	        cout<<ans<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
