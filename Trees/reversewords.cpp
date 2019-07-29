/*This is a function problem.You only need to complete the function given below*/

/*Function to reverse words*/
void reverseWords(char *s) {
    
    // Your code here
    string temp = s;
    
    vector<string> v;
    
    string res;
    
    for (int i=0;i<temp.size();i++)
    {
        if (temp[i] != '.')
        {
            res.push_back(temp[i]);
        }
        else
        {
            v.push_back(res);
            res.clear();
        }
        
    }
    v.push_back(res);
    
    for (int i=v.size()-1; i>0; i--)
    {
        cout<<v[i]<<".";
    }
    cout<<v[0];
    
}
