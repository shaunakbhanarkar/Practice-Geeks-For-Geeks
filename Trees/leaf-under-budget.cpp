/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the binary tree is as
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
*/
// your are required to complete this function
// function should return the number of leaf node
// one can visit
vector<int> res;

void work(struct node* node, int level)
{
    if (node == NULL)
        return;
    
    if (node->left == NULL && node->right == NULL)
    {
        // if (node->data == level)
        // {
            res.push_back(level);
            return;
        // }
        // return;
    }
    
    work(node->left,level+1);
    work(node->right,level+1);
}

int getCount(struct node* node, int k) 
{
    // Code here
    res.clear();
    
    work(node,1);
    
    sort(res.begin(),res.end());
    
    int ans = 0;
    
    for (int i=0; i<res.size();i++)
    {
        if (res[i]<=k)
        {
            ans++;
            k = k - res[i];
            if (k<=0)
                break;
        }
        else
            break;
    }
    return ans;
    
}
