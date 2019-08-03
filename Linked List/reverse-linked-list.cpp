/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Should reverse list and return new head.
Node* reverseList(Node *head)
{
  // Your code here
  if (head->next == NULL)
    return head;
    
    Node * temp = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
