/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the binary search tree is as
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
// your task is to complete the below function
int minValue(Node* root)
{
    // Code here
    if (root == NULL)
        return 0;
    
    if (root->left == NULL)
        return root->data;
    
    else
        return minValue(root->left);
}
