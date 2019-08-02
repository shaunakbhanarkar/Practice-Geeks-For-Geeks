#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int s1,s2,n;
	    cin>>s1>>s2>>n;
	    
	    int min = INT_MAX;
	    for (int i=0 ;i<=n;i++)
	    {
	        int temp = max(s1*i , s2*(n-i));
	        if (min > temp)
	            min = temp;
	        
	    }
	    
	    cout<<min<<endl;
	}
	return 0;
}
