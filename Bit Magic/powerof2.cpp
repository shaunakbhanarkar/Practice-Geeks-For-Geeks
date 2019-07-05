#include<bits/stdc++.h>
using namespace std;


int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long m = n-1;
	    long long res = n & m;
	    
	    
        if (res == 0 && n!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
