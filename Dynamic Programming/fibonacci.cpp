#include<iostream>
using namespace std;

long long a[85] = {0};

long long fibonacci(int n)
{
    if (n==1 || n==2)
    {
        a[n] = 1;
    }
    
    else if (n > 2)
    {
        a[n] = a[n-1] + a[n-2];
    }
    
    return a[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    for (int i=1;i<=n;i++)
	    {
	        cout<<fibonacci(i)<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
