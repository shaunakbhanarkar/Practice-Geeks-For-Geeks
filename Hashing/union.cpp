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
	    int m;
	    cin>>n;
	    cin>>m;
	    
	    vector<int> v1(n);
	    vector<int> v2(m);
	    
	    set<int> s;
	    
	    int res = 0;
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v1[i];
	        s.insert(v1[i]);
	    }
	    
	    for (int i=0; i<m; i++)
	    {
	        cin>>v2[i];
	        s.insert(v2[i]);
	    }
	    cout<<s.size()<<endl;
	    
	}
	return 0;
}
