int transitionPoint(int arr[],int n)
{
// Your code goes here

    for (int i=0;i<n;i++)
    {
        if (arr[i]==1)
            return i;
    }
}
