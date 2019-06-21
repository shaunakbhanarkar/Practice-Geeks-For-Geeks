#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> v;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for (int i=n-1; i>=n-k ; i--)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
