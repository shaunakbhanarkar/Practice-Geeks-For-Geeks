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
	    
	    if (s[0] == '0')
	    {
	        for (int i=1; i<s.size(); i++)
	        {
	            if (s[i] != '0')
	            {
	                swap(s[0],s[i]);
	                break;
	            }
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
