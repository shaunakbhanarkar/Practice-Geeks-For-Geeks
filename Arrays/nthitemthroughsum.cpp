#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{   
	    int n,m;
	    cin>>n>>m;
	    
	    vector<int> v1(n);
	    vector<int> v2(m);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v1[i];
	    }
	    
	    for (int i=0;i<m;i++)
	    {
	        cin>>v2[i];
	    }
	    
	    int k;
	    cin>>k;
	    
	    vector<int> v;
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            v.push_back(v1[i]+v2[j]);   
	        }
	    }
	    
	    sort(v.begin(),v.end());
	    
	    int i=0;
	    while(i<v.size()-1)
	    {
	        if (v[i]==v[i+1])
	        {
	            v.erase(v.begin()+i+1);
	        }
	        else
	        {
	            i++;
	        }
	    }
	    
	    cout<<v[k-1]<<endl;
	    
	}
	return 0;
}
