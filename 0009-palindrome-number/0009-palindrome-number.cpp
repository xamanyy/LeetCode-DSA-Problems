class Solution {
public:
    bool isPalindrome(int x) {
        
        int temp = x;
        
        long long int rev = 0;
        while(x!=0){
            rev = x%10+ rev*10;
            x= x/10;
        }
        
       
        if(temp < 0) 
            rev = -rev;
        
         if(rev == temp) return true;
        return false;
    }
};