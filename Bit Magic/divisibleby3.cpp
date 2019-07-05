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
	    int even=0;
	    int odd=0;
	    for (int i=0;i<s.size();i++)
	    {
	        if ((s.size()-i-1)%2==0 && s[s.size()-i-1]=='1')
	        {
	            even++;
	        }
	        else if ((s.size()-i-1)%2==1 && s[s.size()-i-1]=='1')
	        {
	            odd++;
	        }
	        
	    }
	    
	    
	    
	    if (abs(odd-even)%3 == 0)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
