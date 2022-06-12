class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = 0;
        
        int ans = 0;
        int sum = 0;
        
        unordered_set<int> st;
        
        while(j<n)
        {
            while(st.count(nums[j])>0)
            {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            
            sum += nums[j]; 
            st.insert(nums[j++]);               
            ans = max(ans,sum);
        }
        return ans;
    }
};