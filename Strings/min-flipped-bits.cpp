#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int n;
	cin>>n;
	
	while(n--)
	
	{
	    string s;
	    cin>>s;
	    
	    int a = 0;
	    int b = 0;
	    
	    for (int i=0;i<s.size();i++)
	    {
	        if (i%2 == 1 && s[i]=='0')
	            a++;
	        else if (i%2 == 0 && s[i]=='1')
	            a++;
	    }
	    
	    for (int i=0;i<s.size();i++)
	    {
	        if (i%2 == 1 && s[i]=='1')
	            b++;
	        else if (i%2 == 0 && s[i]=='0')
	            b++;
	    }
	    
	    cout<< min(a,b) << endl;
	    
	}
	return 0;
}
