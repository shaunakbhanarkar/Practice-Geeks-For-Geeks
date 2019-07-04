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
	    
	    vector<int> timings(2359);
	    
	    vector<int> arrival(n);
	    
	    vector<int> departure(n);
	    
	    for (int i=0;i<2359;i++)
	    {
	        timings[i]=0;
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>arrival[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>departure[i];
	    }
	    
	    int max;
	    
	   
	    for (int i=0;i<n;i++)
	    {
	       
	        for (int j=arrival[i]; j<=departure[i];j++)
	        {
	            timings[j-1]++;
	        }
	    }
	    
	    max = timings[0];
	    for (int i=0;i<2359;i++)
	    {
	        if (max < timings[i])
	            max = timings[i];
	    }
	    label: 
	    cout<<max<<endl;
	}
	return 0;
}
