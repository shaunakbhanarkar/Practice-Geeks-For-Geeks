/*This is a function problem.You only need to complete the function given below*/
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   vector<int> v;
   while(s.empty() == false)
   {
       v.push_back(s.top());
       s.pop();
   }
    std::sort(v.begin(),v.end());
   for (int i=0;i<v.size();i++)
   {
       s.push(v[i]);
   }
