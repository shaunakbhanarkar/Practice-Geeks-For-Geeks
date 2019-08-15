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
	    
	    bool dp[s.size()][s.size()];
	    
	    for (int i=0; i<s.size(); i++)
	    {
	        for (int j=0; j<s.size(); j++)
	        {
	            dp[i][j] = false;
	        }
	    }
	    
	    int start = 0;
	    int maxLength = 1;
	    
	    for (int i=0; i<s.size(); i++)
	    {
	        dp[i][i] = true;
	    }
	    bool flag = false;
	    for (int i=0; i<s.size()-1; i++)
	    {
	        if (s[i] == s[i+1])
	        {
	            dp[i][i+1] = true;
	            if (flag == false)
	            {
    	            start = i;
    	            maxLength = 2;
    	            flag = true;
	            }
	        }
	    }
	    
	    for (int len=3; len<=s.size(); len++)
	    {
	        for (int i=0; i<s.size()-len+1; i++)
	        {
	            int j = i + len - 1;
	            
	            if (dp[i+1][j-1] == true && s[i]==s[j])
	            {
	                dp[i][j] = true;
	                
	                if (len > maxLength)
	                {
	                    start = i;
	                    maxLength = len;
	                }
	            }
	        }
	    }
	    
	    for (int i=start; i<start+maxLength; i++)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
