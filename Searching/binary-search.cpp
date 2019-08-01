*This is a function problem.You only need to complete the function given below*/
/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
    if (left > right)
        return -1;
        
    int m = left + right;
    m = m/2;
    
    if (A[m] == k)
    {
        return m;
    }
    
    if (k<A[m])
    {
        return bin_search(A,left, m-1, k);
    }
    
    return bin_search(A, m+1, right, k);
}
