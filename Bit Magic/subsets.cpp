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
	    
	    vector<char> v(n);
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    
	    vector<string> res;
	    for (int i = 0; i< (1 << n); i++)
	    {
	        string s;
	        for (int j=0 ; j < n; j++)
	        {
	            if (i & ( 1 << j))
	                s.push_back(v[j]);
	        }
	        if (s.size() != 0)
	            res.push_back(s);
	    }
	    
	    sort(res.begin(),res.end());
	    
	    for (int i=0; i< res.size(); i++)
	    {
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
