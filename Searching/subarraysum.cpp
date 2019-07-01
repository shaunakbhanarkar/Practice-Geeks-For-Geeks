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
	    
	    int sum,start,end;
	    for (int i=0;i<n;i++)
	    {
	        sum=k;
	        
	        start = i;
	        end = i;
	        for (int j=i;j<n;j++)
	        {
	            sum = sum- a[j];
	            if (sum==0)
	            {
	                end=j;
	                goto label;
	            }
	            if (sum<0)
	                break;
	        }
	    }
	    label:
	    if(start == end && a[start]!=k)
	        cout<<-1<<endl;
	    else
	        cout<<start+1<<" "<<end+1<<endl;
	}
	return 0;
}
