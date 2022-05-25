class Solution {
public:
    int dp[301];
    
    bool helper(int idx,string s, unordered_set<string> &st)
    {
        if(idx >= s.size()) return true;
        if(dp[idx] != -1) return dp[idx];
        string temp;
        
        for(int j = idx;j<s.length();j++)
        {
            temp += s[j];
            
            if(st.find(temp) != st.end())
            {
                    if(helper(j+1,s,st)) return dp[idx] = true;
  
            }
        }
        
        return dp[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> st;
        memset(dp,-1,sizeof dp);
        for(auto it : wordDict)
            st.insert(it);
            
        
        return helper(0,s,st);
    }
};