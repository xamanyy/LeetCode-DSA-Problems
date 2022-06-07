class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        
        int pos = 0;
        int des = 0;
        int jump = 0;
        
        for(int i = 0;i<n-1;i++)
        {   
            des = max(des,i+nums[i]);
            
            if(pos == i)
            {
                pos =des;
                jump++;
            }
        }
        return jump;
    }
};