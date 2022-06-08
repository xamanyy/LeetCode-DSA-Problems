class Solution {
public:
    int removePalindromeSub(string s) {
        int n = s.length();
        
        if(n == 0) return 1;
        string temp = s;
        reverse(s.begin(),s.end());
        if(s == temp) return 1;
        
        
        return 2;
    }
};