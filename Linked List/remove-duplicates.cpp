/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/
// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
    Node * temp = root;
    
    while(temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return root;
}
