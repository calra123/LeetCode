//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    int isOpen(char c)
    {
        if(c=='(')
            return 1;
        else if(c=='[')
            return 2;
        else if(c=='{')
            return 3;
        else return 0;
        
    }
    int isClose(char c)
    {
        if(c==')')
            return 1;
        else if(c==']')
            return 2;
        else if(c=='}')
            return 3;
        else return 0;
        
           
    }
    
    bool isValid(string s) {
        
        stack<char> st;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(isOpen(s[i]))
                st.push(s[i]);
            else if(isClose(s[i])&& st.empty())
                return false;
            else if(isClose(s[i]) && isOpen(st.top())==isClose(s[i]))
                st.pop();
            else return false;
                
            
        }
        
        if(st.empty())
            return true;
        else return false;
        
        
    }
};
