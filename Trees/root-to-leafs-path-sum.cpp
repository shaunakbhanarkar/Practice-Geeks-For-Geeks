/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*You are required to complete below method */
long long solve(Node * root, long long val)
{
    if (root == NULL)
        return 0;
    
    val = val * 10 + root->data;
    
    if(root->left == NULL && root->right == NULL)
        return val;
    
    return solve(root->left, val) + solve( root->right, val);
}

long long treePathsSum(Node *root)
{
    //Your code here
    return solve(root,0);
}
