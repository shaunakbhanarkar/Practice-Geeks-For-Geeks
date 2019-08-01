/*This is a function problem.You only need to complete the function given below*/
//Complete this function
//The array is declared globally
void sortByFreq(int arr[],int n)
{
    //Your code here
    vector<int> v(60,0);
    
    
    for (int i=0;i<n;i++)
    {
        v[arr[i]-1]++;
    }
    
    vector< pair<int,int> > res;
    
    for(int i=0;i<60;i++)
    {
        pair<int,int> p;
        p.first = v[i];
        p.second = i+1;
        res.push_back(p);
    }
    
    sort(res.begin(),res.end());

    for (int i=0;i<res.size();i++)
    {
        for (int j=0;j<res.size();j++)
        {
            if (i!=j)
            {
                pair<int,int> p1 = res[i];
                pair<int,int> p2 = res[j];
                
                if (p1.first == p2.first && p1.second > p2.second)
                {
                    swap(res[i],res[j]);
                }
            }
        }
    }
    
    for (int i=res.size()-1;i>=0;i--)
    {
        pair<int, int> p;
        p = res[i];
        int freq = p.first;
        int num = p.second;
        
        if (freq>0)
        {
            for (int j=0;j<freq;j++)
            {
                cout<<num<<" ";
            }
        }
    }
    
    
    
}
