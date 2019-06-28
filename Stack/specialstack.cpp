/*This is a function problem.You only need to complete the function given below*/
/*Complete the function(s) below*/
void push(int a)
{
     //add code here.
     s.push(a);
}
bool isFull(int n)
{
     //add code here.
     stack<int> p;
     
     int count = 0;
     
     while(s.empty()==false)
     {
         p.push(s.top());
         s.pop();
         count++;
     }
     
     while(p.empty()==false)
     {
         s.push(p.top());
         p.pop();
     }
     
     if (count==n)
        return true;
    return false;
}
bool isEmpty()
{
    //add code here.
    return s.empty();
}
int pop()
{
    //add code here.
    s.pop();
}
int getMin()
{
   //add code here.
   stack<int> p;
   int min= 99999999999;
   
   while(s.empty()==false)
   {
       if (s.top()<min) min = s.top();
       p.push(s.top());
       s.pop();
   }
   
   while(p.empty()==false)
   {
       s.push(p.top());
       p.pop();
   }
   return min;
}
