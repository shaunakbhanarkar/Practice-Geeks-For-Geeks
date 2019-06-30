/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
Node * lca(Node * root, int a, int b)
{
    if (root == NULL)
        return root;
    
    if (root->data == a || root->data == b)
        return root;
    
    Node * temp1 = NULL; 
    Node * temp2 = NULL;
    
    temp1 = lca(root->left, a , b);
    temp2 = lca(root->right, a , b );
    
    if (temp1 != NULL && temp2 != NULL)
        return root;
    
    if (temp1 != NULL)
        return temp1;
    
    if (temp2 != NULL)
        return temp2;
    
    return NULL;
}

int find(Node * root, int x, int val)
{
    if (root == NULL)
        return 0;
        
    if (root->data == x)
        return val;
    
    return find(root->left,x,val+1) + find(root->right,x,val+1);
}

/* Should return minimum distance between a and b 
   in a tree with given root*/
int findDist(Node* root, int a, int b)
{
    // Your code here
    if (root == NULL)
        return 0;
    
    if (a == b)
        return 0;
        
    Node * temp = lca(root, a, b);
    
    return (find(temp,a,0)+find(temp,b,0));
    
}
