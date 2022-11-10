class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size();
        int low = 0;
        int high = n-1;
        
        
        int h;
        int b = n-1;
        
        int area = INT_MIN;
        while(low<=high){
            h = min(v[low],v[high]);
            area = max(area,h*b);
            
            if(v[low] < v[high])
                low++;
            else
                high--;
        
            b--;
        }
        return area;
        
    }
};