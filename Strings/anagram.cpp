#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    string ans = "YES";
	    
	    int a[26]={0};
	    
	    for (int i=0;i<s1.size();i++)
	    {
	        a[s1[i]-'a']++;
	    }
	    
	    for (int i=0;i<s2.size();i++)
	    {
	        a[s2[i]-'a']--;
	    }
	    
	    for (int i=0;i<26;i++)
	    {
	        if (a[i]!=0)
	        {
	            ans = "NO";
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
