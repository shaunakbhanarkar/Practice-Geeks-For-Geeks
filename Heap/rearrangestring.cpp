#include<iostream>
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
	    
	    int a[26];
	    
	    for (int i=0;i<26;i++)
	    {
	        a[i]=0;
	    }
	    
	    for (int i=0;i<s.size();i++)
	    {
	        a[s[i]-97]++;
	    }
	    
	    int ans=1;
	    for (int i=0;i<26;i++)
	    {
	        if (a[i]>s.size()/2)    ans=0;
	        

	    }
	    cout<<ans<<endl;
	}
	return 0;
}
