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
	    
	    int a[26];
	    
	    for (int i=0;i<26;i++)
	    {
	        a[i]=0;
	    }
	    
	    string s;

	    char ans='!';
	    
	    for (int i=0;i<n;i++)
	    {
	        char c;
	        cin>>c;
	        
	        s.push_back(c);
	        
	        a[c-97]++;
	        
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        if (a[s[i]-97] == 1)
	        {
	            ans = s[i];
	            break;
	        }
	    }
	    
	    if (ans == '!')
	        cout<<-1<<endl;
	   else
	    cout<<ans<<endl;
	    
	    
	    
	    
	}
	return 0;
}
