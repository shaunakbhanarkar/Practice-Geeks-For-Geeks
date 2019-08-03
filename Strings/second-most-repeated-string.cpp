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
	    
	    map<string,int> m;
	    
	    string s[n];
	    for(int i=0;i<n;i++)
	    {
	       // string s;
	        cin>>s[i];
	        
	       // if (m.find(s) == m.end())
	       // {
	       //     pair<string,int> p;
	       //     p.first = s;
	       //     p.second = 1;
	       //     m.insert(p);
	       // }
	       // else
	       // {
	       //     int freq = m.at(s);
	       //     pair<string,int> p;
	       //     p.first = s;
	       //     p.second = freq + 1;
	       //     m.insert(p);
	       // }
	       m[s[i]]++;
	        
	    }
	    
	    int max = 0;
	    int temp = 0;
	    
	    for (int i=0;i<n;i++)
	    {
	        if (max < m[s[i]])
	        {
	            max = m[s[i]];
	            temp = i;
	        }
	    }
	    m[s[temp]] = 0;
	    max = 0;
	    for (int i=0;i<n;i++)
	    {
	        if (max < m[s[i]])
	        {
	            max = m[s[i]];
	            temp = i;
	        }
	    }
	   // m[s[temp]] = 0;
	    
	    cout<<s[temp]<<endl;
	   
	   
	  
	}
	return 0;
}
