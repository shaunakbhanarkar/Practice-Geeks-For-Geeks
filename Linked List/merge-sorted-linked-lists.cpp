/*This is a function problem.You only need to complete the function given below*/
 
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    
    if (head1 == NULL)
    {
        return head2;
    }
    
    if (head2 == NULL)
    {
        return head1;
    }
    
    if (head1->data < head2->data)
    {
        head1->next = sortedMerge(head1->next,head2);
        return head1;
    }
    
    head2->next = sortedMerge(head2->next,head1);
    return head2;
}
