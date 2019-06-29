/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */
bool check_left(Node * root, int k)
{
    if (root == NULL)
        return true;
        
    if (root->left == NULL && root->right == NULL)
        return true;
        
    if (root->left != NULL && root->right == NULL)
    {
        if (root->left->data < root->data && root->left->data < k)
            return check_left(root->left, root->data);
        else
            return false;
    }
    
    if (root->left == NULL && root->right != NULL)
    {
        if (root->right->data > root->data && root->right->data < k)
            return check_left(root->right, k);
        else
            return false;
    }
    
    if (root->left->data < root->data && root->left->data < k && root->right->data > root->data && root->right->data < k)
        return check_left(root->left, root->data)&&check_left(root->right,k);
    else
        return false;
}

bool check_right(Node * root, int k)
{
    if (root == NULL)
        return true;
        
    if (root->left == NULL && root->right == NULL)
        return true;
        
    if (root->left != NULL && root->right == NULL)
    {
        if (root->left->data < root->data && root->left->data > k)
            return check_right(root->left, k);
        else
            return false;
    }
    
    if (root->left == NULL && root->right != NULL)
    {
        if (root->right->data > root->data && root->right->data > k)
            return check_right(root->right, root->data);
        else
            return false;
    }
    
    if (root->left->data < root->data && root->left->data > k && root->right->data > root->data && root->right->data > k)
        return check_right(root->left, k)&&check_right(root->right,root->data);
    else
        return false;
}

bool isBST(Node* root) {
    // Your code here
    
    if (root == NULL)
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return true;
        
    if (root->left == NULL && root->right != NULL)
    {
        if (root->right->data > root->data)
            return check_right(root->right,root->data);
        else
            return false;
    }
    
    if (root->left != NULL && root->right == NULL)
    {
        if (root->left->data < root->data)
            return check_left(root->left,root->data);
        else
            return false;
    }
    
    // if (root->left == NULL && root->right == NULL)
    // {
    if (root->left->data < root->data && root->right->data > root->data)
        return check_left(root->left,root->data) && check_right(root->right,root->data);
    else
        return false;
    // }
}
