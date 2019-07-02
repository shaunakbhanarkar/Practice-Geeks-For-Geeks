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
	    
	    
	    vector< pair<int,string> > v;
	    
	    for (int i=0;i<n;i++)
	    {
	        string name;
	        cin>>name;
	        int salary;
	        cin>>salary;
            
            pair<int,string> p;
            p.first = salary;
            p.second = name;
            v.push_back(p);
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for (int i=0;i<v.size();i++)
	    {
	        pair<int,string> p = v[i];
	        cout<<p.second<<" "<<p.first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
