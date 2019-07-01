#include<iostream>
using namespace std;

int calculate(int n, int m)
{
    if (n==1 || m==1)
    {
        return 1;
    }
    return calculate(n,m-1)+calculate(n-1,m);
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
	    
	    cout<<calculate(n,m)<<endl;
	}
	return 0;
	
}
