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
	    
	    
	    bool flag=false;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        
	        if (x == i+1)
	        {
	            cout<<x<<" ";
	            flag = true;
	           // break;
	        }
	    }
	    
	   if (flag == false)
	   {
	       cout<<"Not Found";
	   }
	   
	   cout<<endl;
	}
	return 0;
}
