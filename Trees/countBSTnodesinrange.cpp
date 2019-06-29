/*This is a function problem.You only need to complete the function given below*/
/*
The structure of a BST node is as follows:
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
int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here   
    if (root == NULL)
        return 0;
    
    if (root->data == l)
        return 1+getCountOfNode(root->right,l,h);
    
    if (root->data == h)
        return 1+getCountOfNode(root->left,l,h);
    
    if (root->data < l)
        return getCountOfNode(root->right,l,h);
        
    if (root->data > h)
        return getCountOfNode(root->left,l,h);
    
    return 1+getCountOfNode(root->left,l,h)+getCountOfNode(root->right,l,h);
        
}
