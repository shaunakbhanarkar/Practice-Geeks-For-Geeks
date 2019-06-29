/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
bool isIsomorphic(Node *root1,Node *root2)
{
//add code here.

    if (root1 == NULL && root2 == NULL)
        return true;
        
    if (root1 == NULL && root2 != NULL)
        return false;
    
    if (root1 != NULL && root2 == NULL)
        return false;
        
    if (root1->data != root2->data)
        return false;
        
    return isIsomorphic(root1->left,root2->left)&&isIsomorphic(root1->right,root2->right)
            || isIsomorphic(root1->left,root2->right)&&isIsomorphic(root1->right,root2->left);
}
