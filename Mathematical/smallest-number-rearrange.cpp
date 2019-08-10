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
	    
	    sort(s.begin(),s.end());
	    
	    for(int i=0; i<s.size(); i++)
	    {
	        if (s[i]!='0')
	        {
	            cout<<s[i];
	            s[i] = '/';
	            break;
	        }
	    }
	    
	    for(int i=0; i<s.size(); i++)
	    {
	        if (s[i]!='/')
	        {
	            cout<<s[i];
	            
	        }
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
