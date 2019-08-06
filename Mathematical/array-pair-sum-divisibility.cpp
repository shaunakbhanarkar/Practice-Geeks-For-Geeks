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
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        sum = sum + x;
	    }
	    
	    int k;
	    cin>>k;
	    
	    if (n%2)
	        cout<<"False"<<endl;
	    else
	    {
	        if (sum%k == 0 && sum >= n*k/2)
	            cout<<"True"<<endl;
	        else
	            cout<<"False"<<endl;
	    }
	}
	return 0;
}
