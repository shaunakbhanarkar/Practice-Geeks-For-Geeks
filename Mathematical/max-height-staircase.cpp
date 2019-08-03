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
	    
	    int sum = 0;
	    
	    int height = 0;
	    while(sum<=n)
	    {
	        sum = sum + height;
	        height++;
	    }
	    cout<<height-2<<endl;
	}
	return 0;
}
