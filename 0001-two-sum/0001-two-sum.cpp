class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sz = nums.size();
        
        for(int i = 0;i<sz;i++){
            for(int j = 0;j<i;j++){
                if(nums[i] + nums[j] == target)
                    return {i,j};
            }
        }
        
        return {-1};
    }
};