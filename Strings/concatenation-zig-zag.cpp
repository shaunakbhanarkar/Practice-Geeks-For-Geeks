#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int n;
	    cin>>n;
	    
	    if (n==1)
	        cout<<s<<endl;
	    else
	    {
    	    vector<string> v(n);
    	    
    	    bool direction = false;
    	    
    	    //false -> down
    	    //true -> up
    	    
    	    int row = 0;
    	    
    	    for (int i=0;i<s.size();i++)
    	    {
    	        v[row].push_back(s[i]);
    	        if (direction == false)
    	            row++;
    	        else
    	            row--;
    	        if (row == 0)
    	            direction = false;
    	        else if (row == n-1)
    	            direction = true;
    	            
    	    }
    	    
    	    for (int i=0;i<n;i++)
    	    {
    	        cout<<v[i];
    	    }
    	    cout<<endl;
	    }
	}
	return 0;
}
