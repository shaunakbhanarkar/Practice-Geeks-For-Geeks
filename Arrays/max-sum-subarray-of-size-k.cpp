#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
    {
        int n;
        int k;
        cin>>n;
        cin>>k;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        int max = INT_MIN;
        for (int i=0;i<k;i++)
        {
            sum = sum + a[i];
        }
        max = sum;
        for (int i=k;i<n;i++)
        {
            sum = sum + a[i] - a[i-k];
            if (sum > max)
                max = sum;
        }
        cout<< max <<endl;
    }
	return 0;
}
