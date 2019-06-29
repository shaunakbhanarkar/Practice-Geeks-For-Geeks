/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the tree is as
struct Node
{
	int key;
	struct Node* left, *right;
};
*/

bool find(struct Node* left, struct Node* right)
{
    if (left == NULL && right != NULL)
        return false;
    if (left != NULL && right == NULL)
        return false;
    if (left == NULL && right == NULL)
        return true;
    if (left->key != right->key)
        return false;
    
    return find(left->left,right->right)&&find(left->right,right->left);
}
// complete this function
// return true/false if the is Symmetric or not
bool isSymmetric(struct Node* root)
{
	// Code here
	if (root == NULL)
	    return false;
	    
	return find(root->left,root->right);
    
}
