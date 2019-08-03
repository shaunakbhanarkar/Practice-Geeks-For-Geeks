/*This is a function problem.You only need to complete the function given below*/

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if (head1 == NULL || head2 == NULL)
        return -1;
    
    while(head1 != NULL)
    {
        head1->data = - head1->data;
        head1 = head1->next;
    }
    
    while(head2 != NULL)
    {
        if (head2->data < 0)
            return -(head2->data);
        
        head2 = head2->next;
    }
    
    return -1;
    
}
