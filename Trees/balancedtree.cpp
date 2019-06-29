/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node structure
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
// This function should return tree if passed  tree 
// is balanced, else false. 
bool isBalanced(Node *root)
{
    //  Your Code here
    if (root == NULL)
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return true;
    
    if (root->left == NULL && root->right != NULL)
    {
        if (root->right->left == NULL && root->right->right == NULL)
            return true;
        else
            return false;
    }
    
    if (root->left != NULL && root->right == NULL)
    {
        if (root->left->left == NULL && root->left->right == NULL)
            return true;
        else
            return false;
    }
    
    return isBalanced(root->left)&&isBalanced(root->right);
    
}
