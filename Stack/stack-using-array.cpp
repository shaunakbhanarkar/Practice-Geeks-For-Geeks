/*This is a function problem.You only need to complete the function given below*/
/* 
The structure of the class is
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
 */
/* The method push to push element into the stack */
void MyStack :: push(int x)
{
        // Your Code
        top++;
        arr[top] = x;
}
/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
        // Your Code       
        if (top == -1)
            return -1;
            
        return arr[top--];
}
