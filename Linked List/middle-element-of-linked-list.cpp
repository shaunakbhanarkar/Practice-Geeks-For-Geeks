/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   if (head == NULL)
    return -1;
//   vector<int> v;
    Node * slow = head;
    Node * fast = head;
   while(fast != NULL && fast->next != NULL)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
   
   
   return slow->data;
}
