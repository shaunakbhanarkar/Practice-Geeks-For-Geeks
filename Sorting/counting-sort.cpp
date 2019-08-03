/*This is a function problem.You only need to complete the function given below*/
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
// Your code goes here

    int a[26] = {0};
    
    for (int i=0;i<strlen(arr);i++)
    {
        a[arr[i]-'a']++;
    }
    
    int index=0;
    for (int i=0;i<26;i++)
    {
        while(a[i]--)
        {
            arr[index] = 'a' + i;
            index++;
        }
    }

}
