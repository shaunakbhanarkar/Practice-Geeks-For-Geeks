#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> v, int x, int left, int right)
{
    if (left > right)
        return -1;
    
    int mid = left + right;
    mid = mid / 2;
    
    if (v[mid] == x && v[mid-1] < x)
        return mid;
        
    if (v[mid] == x && v[mid-1] == x)
        return firstOccurence(v,x,left,mid-1); 
    
    if (v[mid] > x)
        return firstOccurence(v,x,left,mid-1);
    
    if (v[mid] < x)
        return firstOccurence(v,x,mid+1,right);
        
    return -1;
    
}

int lastOccurence(vector<int> v, int x, int left, int right)
{
    if (left > right)
        return -1;
    
    int mid = left + right;
    mid = mid / 2;
    
    if (v[mid] == x && v[mid+1] > x)
        return mid;
        
    if (v[mid] == x && v[mid+1] == x)
        return lastOccurence(v,x,mid+1,right); 
    
    if (v[mid] > x)
        return lastOccurence(v,x,left,mid-1);
    
    if (v[mid] < x)
        return lastOccurence(v,x,mid+1,right);
        
    return -1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    cin>>x;
	    vector<int> v(n);
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    
	    int first = firstOccurence(v,x,0,n-1);
	    
	    if (first == -1)
	        cout<<first<<endl;
	    
	    else
	    {
	        cout<<first<<" ";
	        cout << lastOccurence(v,x,0,n-1) <<endl;
	    }
	    
	   // cout<< lower_bound(v.begin(),v.end(),x) - v.begin() <<" ";
	   // cout<< upper_bound(v.begin(),v.end(),x) - v.begin() <<endl;
	}
	return 0;
}
