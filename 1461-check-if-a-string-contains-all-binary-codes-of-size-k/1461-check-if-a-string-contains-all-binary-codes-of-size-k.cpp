class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        int total = 1<<k;
        // cout<<total;
        int i = 0;
        int j = 0;
        
        
        int n = s.length();
        
        unordered_set<string> st;
        
        while(j<n)
        {
            if(j-i+1 < k) j++;
            
            else if(j-i+1 == k)
            {
                st.insert(s.substr(i,j-i+1));
                i++;
                j++;
            }
        }
        
        cout<<st.size();
        if(total == st.size()) return true;
        
        return false;
    }
};