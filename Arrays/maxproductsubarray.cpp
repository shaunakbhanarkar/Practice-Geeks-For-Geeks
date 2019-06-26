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
	    
	    vector<int> v(n);
	    
	    int maximum = INT_MIN;
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if (v[i] > maximum)
	            maximum = v[i];
	    }
	    
	    
	   // for (int i=0;i<n;i++)
	   // {
	   //     cout<<"v"<<i<<"="<<v[i]<<endl;
	   // }
	   
	    int max = INT_MIN;
	    
	   // cout<<"max="<<max<<endl;
	   
	    for (int i=0; i<n-1 ;i++)
	    {
	       // cout<<"begin ... i="<<i<<endl;
	       
	        int product = v[i];
	        
	        
	       // cout<<"product = "<<product<<endl;
	        for (int j=i+1; j<n;j++)
	        {
	           // cout<<"j = "<<j<<endl;
	           // cout<<"v"<<j<<"="<<v[j]<<endl;
	            product = product * v[j];
	           // cout<<"product="<<product<<endl;
	            if (product > max)
	                max = product;
	           // cout<<"max="<<max<<endl;
	        }

	    }
	    if (max < maximum)
	        max = maximum;
	    cout<<max<<endl;
	}
	return 0;
}
