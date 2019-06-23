/*This is a function problem.You only need to complete the function given below*/
/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
    if (right >= left)
    {
        int mid = ( left + right )/ 2;
        
        if (A[mid]==k)
            return mid;
        else if (A[mid]<k)
            return bin_search(A,mid+1,right,k);
        else
            return bin_search(A,left,mid-1,k);
            
    }
    return -1;
}
