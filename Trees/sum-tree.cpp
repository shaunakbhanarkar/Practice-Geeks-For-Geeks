/*This is a function problem.You only need to complete the function given below*/
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Should return true if tree is Sum Tree, else false

int sum(Node * root)
{
    if (root == NULL)
        return 0;
    
    return (root->data + sum(root->left) + sum(root->right));
}
bool isSumTree(Node* root)
{
     // Your code here
     if (root == NULL)
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return true;
        
    if (root->left != NULL && root->right == NULL)
        return isSumTree(root->left) && (root->data == sum(root->left));
    
    if (root->left == NULL && root->right != NULL)
        return isSumTree(root->right) && (root->data == sum(root->right));
    
    return isSumTree(root->left) && isSumTree(root->right) && (root->data == sum(root->left) + sum(root->right));
    
        
}
