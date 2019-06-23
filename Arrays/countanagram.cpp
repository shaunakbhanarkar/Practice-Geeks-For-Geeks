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
	    string c;
	    
	    cin>>s;
	    cin>>c;
	    
	    int count=0;
	    
	    sort(c.begin(),c.end());
	    
	    for (int i=0;i<=s.size()-c.size();i++)
	    {
	        string temp = s.substr(i,c.size());
	        sort(temp.begin(),temp.end());
	        
	        if (c==temp)
	            count++;
	    }
	    
	    
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
