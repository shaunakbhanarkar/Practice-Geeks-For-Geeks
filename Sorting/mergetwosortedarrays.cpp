#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    vector<int> v1(x);
	    vector<int> v2(y);
	    
	    for (int i=0;i<x;i++)
	    {
	        cin>>v1[i];
	    }
	    
	    for (int i=0;i<y;i++)
	    {
	        cin>>v2[i];
	    }
	    
	    
	    int pointer1 = 0;
	    int pointer2 = 0;
	    
	    int flag=0;
	    
	    while(true)
	    {
	        if (flag == 0)
	        {
	        if (v1[pointer1]<v2[pointer2])
	        {
	            cout<<v1[pointer1]<<" ";
	            pointer1++;
	            if (pointer1==x)
	                flag = 1;
	        }
	        else
	        {
	            cout<<v2[pointer2]<<" ";
	            pointer2++;
	            if (pointer2==y)
	                flag = 2;
	        }
	        }
	        else if (flag == 1)
	        {
	            cout<<v2[pointer2]<<" ";
	            pointer2++;
	            if (pointer2 == y)
	                goto label;
	        }
	        else if (flag == 2)
	        {
	            cout<<v1[pointer1]<<" ";
	            pointer1++;
	            if (pointer1 == x)
	                goto label;
	        }
	    }
	    
	    label:  cout<<endl;
	    
	}
	return 0;
}
