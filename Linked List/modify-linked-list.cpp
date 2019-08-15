/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
};
*/
struct Node* modifyTheList(struct Node *head)
{
//add code here.

    if (head == NULL || head->next == NULL)
        return head;
    
    stack<struct Node *> s;
    
    struct Node* slow = head;
    struct Node* fast = head;
    
    struct Node* temp = head;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    struct Node * res = slow;
    while(slow != NULL)
    {
        s.push(slow);
        // cout << "pushed" << slow->data << endl;
        slow = slow->next;
    }
    // cout << "temp" << temp->data << endl;
    while(s.empty() == false)
    {
        temp->data = temp->data - s.top()->data ;
        // cout << "popping" << s.top()->data << endl;
        s.pop();
        temp = temp->next;
        if (temp == res)
            break;
        
    }
    return head;
    
}
