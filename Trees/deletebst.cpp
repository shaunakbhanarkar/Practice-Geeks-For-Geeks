/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; 
*/

Node * inorder_successor(Node * root)
{
    Node * temp = root->right;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deleteNode(Node *root,  int x)
{
    // your code goes here
    if (root == NULL)
        return NULL;
    
    if (root->data > x)
        root->left =  deleteNode(root->left, x);
        
    else if (root->data < x)
        root->right = deleteNode(root->right, x);
        
    else {
        if (root->left == NULL)
        {
            Node * temp = root->right;
            free(root);
            return temp;
        }
        
        else if (root->right == NULL)
        {
            Node * temp = root->left;
            free(root);
            return temp;
        }
        
    Node * temp = inorder_successor(root);
    
    root->data = temp->data;
    
    root->right = deleteNode(root->right,root->data);
    }
    return root;
    
}
