// normal sort doesnt work

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
	    
	    vector<int> v (n);
	    
	    int count0 = 0;
	    int count1 = 0;
	    int count2 = 0;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if (x==0)   count0++;
	        if (x==1)   count1++;
	        if (x==2)   count2++;
	    }
	   
	    
	    
	    
	    for(int i=0;i<count0;i++)
	    {
	        cout<<0<<" ";
	    }
	    for(int i=0;i<count1;i++)
	    {
	        cout<<1<<" ";
	    }
	    for(int i=0;i<count2;i++)
	    {
	        cout<<2<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
