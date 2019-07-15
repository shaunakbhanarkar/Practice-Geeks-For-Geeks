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
	    
	    int count = 0;
	    int res = 0;
	    for (int i=s.size()-1;i>=0;i--)
	    {
	        if (s[i] >= '0' && s[i] <= '9')
	        {
	            res = res + pow (10,s.size()-i-1) * (s[i] - '0');
	            count++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if (s.size()-count== res)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
