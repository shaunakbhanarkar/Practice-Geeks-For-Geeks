/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
/* Computes the diameter of binary tree with given root.  */

int height(Node* node)
{
    if (node == NULL)
        return 0;
    
    return 1 + max (height(node->left) , height(node->right));
}
int diameter(Node* node)
{
   // Your code here
   if (node == NULL)
    return 0;

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    
    int leftDiameter = diameter(node->left);
    int rightDiameter = diameter(node->right);
    
    return max(leftHeight+rightHeight+1, max(leftDiameter, rightDiameter));
    
}
