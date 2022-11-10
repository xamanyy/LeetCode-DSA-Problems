class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int low = 0;
        int high = n-1;
        
        
        int h;
        int b = n-1;
        int area = INT_MIN;
        
        while(low<=high){
            h = min(height[low],height[high]);
            area = max(area,h*b);
            
            if(height[low] < height[high])
                low++;
            else 
                high--;
            
            
            b--;
        }
        
        return area;
    }
};