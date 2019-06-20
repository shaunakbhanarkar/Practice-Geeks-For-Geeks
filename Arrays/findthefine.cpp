#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int n,d;
	cin>>n>>d;
	
	int car[n],penalty[n];
	
	for (int i=0;i<n;i++)
	{
	    cin>>car[i];
	}
	
	for (int i=0;i<n;i++)
	{
	    cin>>penalty[i];
	}
	
	int sum=0;
	
	if (d%2 == 0)
	{
	    for (int i=0;i<n;i++)
	    {
	        if(car[i]%2 == 1)
	        {
	            sum = sum + penalty[i];
	        }
	    }
	}
	else
	{
	    for (int i=0;i<n;i++)
	    {
	        if(car[i]%2 == 0)
	        {
	            sum = sum + penalty[i];
	        }
	    }
	}
	
	cout<<sum<<endl;
	}
	return 0;
}
