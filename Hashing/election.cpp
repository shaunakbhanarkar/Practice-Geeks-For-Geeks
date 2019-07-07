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
	    
	    vector<string> v(n);
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    int max = -1;
	    int temp = 0;
	    string ans = "!";
	    for (int i=0; i<n; i++)
	    {
	        if (v[i]==v[i+1])
	        {
	            temp++;
	        }
	        else
	        {
	            
	            if (max < temp)
	            {
	                max = temp;
	                ans = v[i];
	            }
	            temp=0;
	        }
	    }
	    if (temp == n-1)
	    {
	        ans = v[0];
	        max = temp;
	    }
	    
	    if (ans ==  "!")
	        cout<<-1<<endl;
	   else
	        cout<<ans<<" "<<max+1<<endl;
	}
	return 0;
}
