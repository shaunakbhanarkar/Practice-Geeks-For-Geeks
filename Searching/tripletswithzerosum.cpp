/*This is a function problem.You only need to complete the function given below*/

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int a[], int n)
{ 
    //Your code here
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (i!=j && j!=k && k!=i)
                {
                    if (a[i]+a[j]+a[k] == 0)
                        return true;
                }
            }
        }
    }
    return false;
}
