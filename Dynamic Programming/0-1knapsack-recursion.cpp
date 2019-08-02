#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int> value, vector<int> weight, int w,int n)
{
    if (n == 0 || w == 0)
        return 0;
    
    if (weight[n-1] > w)
        return knapsack(value,weight,w,n-1);
    
    return max(knapsack(value,weight,w-weight[n-1],n-1) + value[n-1], knapsack(value,weight,w,n-1));
    
  
    
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    int w;
	    cin>>n>>w;
	    
	    vector<int> value(n);
	    vector<int> weight(n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>value[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>weight[i];
	    }
	    
	    cout<<knapsack(value,weight,w,n)<<endl;
	}
	return 0;
}
