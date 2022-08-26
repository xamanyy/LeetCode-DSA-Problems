class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i = 0;i<nums.size();i++){
            
            int x = target - nums[i];
            
            if(umap.find(x) != umap.end()){
                return {i,umap[x]};
            }
            umap[nums[i]] = i;
        }
        return {-1};
    }
};