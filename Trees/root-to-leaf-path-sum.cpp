/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool hasPathSum(Node *node, int sum)
{
   //Your code here
   if (node == NULL)
   {
       return false;
   }
   
   if (sum <= 0)
   {
       return false;
   }
   
   if (node->left == NULL && node->right == NULL)
   {
       return (node->data == sum);
   }
   
   sum = sum - node->data;
   
   return hasPathSum(node->left,sum) || hasPathSum(node->right,sum);
}
