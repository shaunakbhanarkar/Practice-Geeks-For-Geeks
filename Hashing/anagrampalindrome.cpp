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
	    
	    int couple=0;
	    int single=0;
	    
	    for (int i=0;i<s.size()-1;i++)
	    {
	        if (s[i]==s[i+1])
	        {
	            couple++;
	            s[i]=0;
	            s[i+1]=0;
	            i++;
	        }
	        else
	        {
	            single++;
	        }
	    }
	    if (single>1)
	        cout<<"No"<<endl;
	       else
	        cout<<"Yes"<<endl;
	}
	return 0;
}
