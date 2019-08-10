#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> v(n);
        
        int min = INT_MAX;
        for (int i=0; i<n; i++)
        {
            cin>>v[i];
            if (v[i] < min)
                min = v[i];
        }
        // cout << "min = " << min << endl;
        int res = 0;
        for (int i=0; i<n; i++)
        {
            if (v[i]>min)
                res = res + v[i] - min;
        }
        // cout << "res = " << res << endl;
        if (res % n != 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            res = res / n;
            int ans = 0;
            for (int i=0; i<n; i++)
            {
                if (v[i]>min+res)
                    ans = ans + v[i] - res - min;
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}
