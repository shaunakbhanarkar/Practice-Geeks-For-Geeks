/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node
{
    int key;
    struct Node *left, *right;
};
*/
bool isFullTree (struct Node* root)
{
//add code here.
    if (root == NULL)
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return true;
    
    if (root->left != NULL && root->right == NULL)
        return false;
    
    if (root->left == NULL && root->right != NULL)
        return false;
    
    return isFullTree(root->left) && isFullTree(root->right);
        
}
