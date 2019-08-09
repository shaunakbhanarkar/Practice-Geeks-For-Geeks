#include<bits/stdc++.h>
using namespace std;

long int merge(int a[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    
    int res[end-start+1];
    int k = 0;
    long int inversions = 0;
    while(i<=mid && j<=end)
    {
        if (a[i]<=a[j])
        {
            res[k] = a[i];
            k++;
            i++;
        }
        else
        {
            res[k] = a[j];
            k++;
            j++;
            inversions = inversions + mid - i + 1;
        }
    }
    
    if (i > mid)
    {
        while(j<=end)
        {
            res[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            res[k] = a[i];
            k++;
            i++;
        }
    }
    
    for (int i=start; i<=end; i++)
    {
        a[i] = res[i-start];
    }
    return inversions;
}
long int mergeSort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = start + end;
        mid = mid / 2;
        
        long int c1 = mergeSort(a,start,mid);
        long int c2 = mergeSort(a,mid+1,end);
        long int c3 = merge(a,start,mid,end);
        
        return c1+c2+c3;
    }
    return 0;
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
	    
	   // vector<int> v(n);

        int a[n];	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    cout << mergeSort(a,0,n-1) << endl;
	}
	return 0;
}
