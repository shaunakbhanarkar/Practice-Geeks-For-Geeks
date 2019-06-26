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
	    
	    int a[n];
	    int count=0;

	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if (a[i]==0)
	            count++;
	    }
	    
	    
	    int sum;
	    for (int i=0;i<n-1;i++)
	    {
	        sum=a[i];

	        for (int j=i+1;j<n;j++)
            {
                sum = sum + a[j];
                if (sum == 0)
                    count++;
            }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
