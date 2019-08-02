#include<bits/stdc++.h>
using namespace std;

int eggdrop(int n, int k)
{
    if (k==1 || k==0)
        return k;
    
    if (n==1)
        return k;
    
    int min = INT_MAX;
    for (int x=1;x<=k;x++)
    {
        int res = 1 + max(eggdrop(n-1,x-1), eggdrop(n,k-x));
        if (min > res)
            min = res;
    }
    return min;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    cout<<eggdrop(n,k)<<endl;
	}
	return 0;
}
