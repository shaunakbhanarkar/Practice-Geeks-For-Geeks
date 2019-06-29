/*The structure of node is as follows
struct node{
	string data;
	node *left;
	node *right;
};
*/
/*You are required to complete below method */
int evalTree(node* root)
{
    //Your code here
    if (root == NULL)
        return 0;
    
    if (root->data == "+")
    {
        return evalTree(root->left)+evalTree(root->right);
    }
    
    if (root->data == "-")
    {
        return evalTree(root->left)-evalTree(root->right);
    }
    
    if (root->data == "*")
    {
        return evalTree(root->left)*evalTree(root->right);
    }
    
    if (root->data == "/")
    {
        return evalTree(root->left)/evalTree(root->right);
    }
    
    string s = root->data;
    int num=0;
    
    for (int i=0;i<s.size();i++)
    {
        int x = s[i]-48;
        num = 10*num + x;
    }
    return num;
}
