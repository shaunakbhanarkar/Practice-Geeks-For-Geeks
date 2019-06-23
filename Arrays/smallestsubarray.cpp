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
	    int k;
	    cin>>k;
	    
	    int a[n];
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int min=n;
	    for (int i=0; i<n;i++)
	    {
	        int sum=0;
	        for (int j=i ; j<n;j++)
	        {
	            sum = sum + a[j];
	            if (sum > k)
	           {
	               if (min > j-i+1)
	               {
	                    min = j-i+1;
	                    break;
	               }
	           }
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
