/*This is a function problem.You only need to complete the function given below*/
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        s1.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code      
       if (s2.empty())
       {
           if (s1.empty())
            return -1;
            else
            {
                while(s1.empty()==false)
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                int x = s2.top();
                s2.pop();
                return x;
                
            }
                
       }
       else
       {
           int x = s2.top();
           s2.pop();
           return x;
       }
}
