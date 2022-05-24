class Solution {
public:
    int longestValidParentheses(string s) {
        //no .of open braces = =no. of clode braces.
        
        int n = s.length();
        int ans =0;
        int open = 0,close =0;
        
        
        //o to n close will be more.
        for(int i = 0;i<n;i++)
        {
            if(s[i] == '(')
                open++;
            else
                close++;
            
            if(open == close)
            {
                ans = max(ans,open+close);
            }
            else if(close > open)
                open = close = 0;
        }
        
        //n -- 0;
        open = close = 0;
        
        for(int  i = n-1;i>=0;i--)
        {
            if(s[i] == '(')
                open++;
            else
                close++;
            
            if(open == close)
            {
                ans = max(ans,open+close);
            }
            else if(open > close)
                open = close = 0;
        }
        return ans;
    }
};