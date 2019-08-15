#include<bits/stdc++.h>
using namespace std;

int solve(double a, double b, double c)
{
    if (c == 0 && a != b)
        return 0;
    
    if (a == b)
        return 1;
    
    int x = ceil ( (b-a)/c );
    int y = floor ( (b-a)/c );
    
    if (x == y && y >= 0)
        return 1;
    
    return 0;

}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    double a, b, c;
	    cin>> a >> b >> c;
	   
	    cout << solve ( a, b, c) << endl; 
	    
	}
	return 0;
}
