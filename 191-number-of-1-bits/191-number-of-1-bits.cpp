class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int ans = 0;
        
        while(n!=0)
        {
            int digit = n%2;
            if(digit == 1)ans++;
            n =n/2;
        }
        
        return ans;
    }
};