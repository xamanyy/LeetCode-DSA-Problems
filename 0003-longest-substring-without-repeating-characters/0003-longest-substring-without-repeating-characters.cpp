class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        unordered_map<int,int> mp;
        
        int i = 0;
        int j = 0;
        
        
        int res = 0;
        
        while(j<n){
            mp[s[j]]++;
            
            if( (j-i+1) == mp.size()){
                res = max(res,j-i+1);
                j++;
            }
            
            else if( mp.size() < (j-i+1))
            {
                while( mp.size() < (j-i+1)){
                    mp[s[i]]--;
                    
                    if(mp[s[i]] == 0)
                        mp.erase(s[i]);
                    
                    i++;
                }
                 j++;
            }
            
        }
        
        return res;
        
    }
};