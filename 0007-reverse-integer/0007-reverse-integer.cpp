class Solution {
public:
    int reverse(int x) {
        
        int temp = x;
        if(x == 0) return 0;
        
        if(x <= -2147483647 || x > 2147483647) return 0;
        
        
        if(x < 0)
            x = -x;
        
        long long int rev = 0;
        
        while(x != 0){
            rev = x%10 + rev*10;
            x = x/10;
        }
        
        if(rev <= -2147483647 || rev > 2147483647) return 0;
        
        if(temp < 0)
            rev = -rev;
        
        
        return rev;
    }
};