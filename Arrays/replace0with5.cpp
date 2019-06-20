/*you are required to complete this method*/
int convertFive(int n)
{
//Your code here

    vector<int> v;
    while (n>0)
    {
        if (n%10 == 0)
        {
            v.push_back(5);
        }
        else
        {
            v.push_back(n%10);
        }
        n=n/10;
    }
    

    
    int x=0;
    for (int i=0;i<v.size();i++)
    {
        x = 10*x + v[v.size()-i-1]; 
    }
    return x;
}
