/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST node is as follows:
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
/* This function should insert a new node with 
  given data and return root of the modified tree  */
Node* insert(Node* root, int data)
{
    // Your code here
    if (root == NULL)
    {
        Node * temp = new Node (data);
        // temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    
    if (root->data > data)
    {
        root->left = insert(root->left,data);
    }
    
    if (root->data < data)
    {
        root->right = insert(root->right,data);
    }
    
    return root;
}
