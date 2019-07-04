#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    
	    vector<int> v;
	    
	    while(n>0)
	    {
	        v.push_back(n%2);
	        n=n/2;
	    }
	    
	    int res=0;
	    if(v[v.size()-k]==1)
	    {
	        v[v.size()-k]=0;   
	    }
	    for (int i=v.size()-1;i>=0;i--)
	        {
	            res = res*2 + v[i];
	        }
	    cout<<res<<endl;
	    
	}
	return 0;
}
