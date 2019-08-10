#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n<=1)
        return false;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    for (int i=n; i<=m; i++)
	    {
	        if (isPrime(i))
	            cout<<i<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
