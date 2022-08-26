class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string s = to_string(n);
        sort(s.begin(),s.end());
        
        vector<string> temp;
        
        for(int i = 0;i<=30;i++){
            int p = pow(2,i);
            temp.push_back(to_string(p));
        }
        
        //sorting the each element of vector of string.
        for(int i = 0;i<=30;i++){
            sort(temp[i].begin(),temp[i].end());
        }
        
        for(int i = 0;i<=30;i++){
            if(temp[i] == s)
                    return true;
        }
        return false;
    }
};