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
	    
	    int k;
	    cin>>k;
	    
	    vector<int> v(n);
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    
	    
	    
	    sort(v.begin(),v.end());
	    int ans = -1;
	    for (int i=0; i<n; i++)
	    {
	        if (binary_search(v.begin() + i + 1, v.end() , v[i] + k))
	        {
	            ans = 1;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
