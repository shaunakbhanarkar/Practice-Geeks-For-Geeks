/*This is a function problem.You only need to complete the function given below*/
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode * node = new QueueNode(x);
        if (front == NULL)
        {
            front = node;
            rear = node;
        }
        else
        {
            rear->next = node;
            rear = node;
        }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code  
        if (front == NULL)
            return -1;
        int x = front->data;
        front = front->next;
        return x;
}
