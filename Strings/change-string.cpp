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
	    
	    if (s[0]>='A' && s[0]<='Z')
	    {
	        for (int i=1;i<s.size();i++)
	        {
	            if (s[i]>='a' && s[i]<='z')
	            {
	                s[i] = s[i] + 'A' - 'a';
	            }
	        }
	    }
	    else
	    {
	        for (int i=1;i<s.size();i++)
	        {
	            if (s[i]>='A' && s[i]<='Z')
	            {
	                s[i] = s[i] + 'a' - 'A';
	            }
	        }
	    }
	    
	    cout<<s<<endl;
	}
	return 0;
}
