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
        
        vector<string> v;
        
	    for (int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        
	        sort(s.begin(),s.end());
	        
	        m[s]++;
	        
	        if (m[s] == 1)
	            v.push_back(s);
	    }
	    vector<int> p;
        for(int i=0;i<v.size();i++)
        {
            p.push_back(m[v[i]]);
        }
        sort(p.begin(),p.end());
        
        for (int i=0;i<p.size();i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
        

	    
	}
	return 0;
}
