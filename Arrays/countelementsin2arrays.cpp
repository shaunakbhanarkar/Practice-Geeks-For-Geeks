/*This is a function problem.You only need to complete the function given below*/
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
//Your code goes here

    for (int i=0;i<m;i++)
    {
        int count=0;
        for (int j=0;j<n;j++)
        {
            if (arr2[j]<=arr1[i])
                count++;
        }
        cout<<count<<" ";
    }
}
