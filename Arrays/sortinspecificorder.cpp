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
	    
	    vector<int> even;
	    vector<int> odd;
	    
	    for (int i=0 ; i < n;i++)
	    {
	        int x;
	        cin>>x;
	        if (x%2)
	        {
	            odd.push_back(x);
	        }
	        else
	        {
	            even.push_back(x);
	        }
	    }
	    
	    sort(odd.begin(),odd.end());
	    sort(even.begin(),even.end());
	    
	    for (int i=odd.size()-1; i>=0 ; i--)
	    {
	        cout<<odd[i]<<" ";
	    }
	    for (int i=0;i<even.size();i++)
	    {
	        cout<<even[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
