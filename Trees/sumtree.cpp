/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int sum(Node * node)
{
    if (node == NULL)
    {
        return 0;
    }
    
    int temp = node->data;
    
    int l = sum(node->left);
    
    int r = sum(node->right);
    
    node->data = l + r;
    
    return temp + node->data;
}
void toSumTree(Node *node)
{
    // Your code here
    sum(node);
}
