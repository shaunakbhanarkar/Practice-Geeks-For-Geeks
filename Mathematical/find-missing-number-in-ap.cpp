#include <iostream>
using namespace std;

int findMissing(int a[], int left, int right, int diff)
{
    if (left > right)
        return -1;
    
    int mid = left + right;
    mid = mid/2;
    
    if (a[mid] + diff != a[mid+1])
        return a[mid] + diff;
    
    if (a[mid] - diff != a[mid-1])
        return a[mid] - diff;
    
    if (a[mid] != a[left] + (right-left+1)*diff/2)
        return findMissing(a,left,mid-1,diff);
    
    return findMissing(a,mid+1,right,diff);
    
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    int diff = a[n-1] - a[0];
	    diff = diff / n;
	    cout<<findMissing(a,0,n-1,diff)<<endl;
	}
	return 0;
}
