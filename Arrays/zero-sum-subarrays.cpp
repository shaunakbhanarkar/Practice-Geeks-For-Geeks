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
	    
	    int a[n];
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    int sum = 0;
	    int res = 0;
	    unordered_map<int,int> m;
	    m[0]++;
	    
	    for (int i=0; i<n; i++)
	    {
	        sum = sum + a[i];
	        
	        if (m.find(sum)!=m.end())
	        {
	            res = res + m[sum];
	        }
	        m[sum]++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
