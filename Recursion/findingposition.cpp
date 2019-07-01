#include<iostream>
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
	    
	    if (n==1)
	        cout<<1<<endl;
	    else
	    {
	        int num = 2;
	        while(num<=n)
	        {
	            num = num * 2;
	        }
	        cout<<num/2<<endl;
	    }
	}
	return 0;
}
