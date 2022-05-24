class Solution {
public:
    int longestValidParentheses(string s) {
        //we will set intial parameter as -1
        // if we got open bracket push its's index.
        // else pop that from stack.
        //then check uf stack is emoty so push the current index again.
        // thenif it is not empty the find the length of maximum i - st.top;
        //store it into the max Answer.
        
        stack<int> st;
        st.push(-1);
        
        
        int n = s.length();

        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            if(s[i] == '(') st.push(i);
            
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                {
                    ans = max(ans,i - st.top());
                }
            }
        }
        return ans;
    }
};