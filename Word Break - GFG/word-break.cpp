// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{

int dp[1101];

int helper(int idx,string &str,unordered_set<string> &st)
{
    //base condition
    if(idx >= str.length()) return 1;
    if(dp[idx] != -1) return dp[idx];
    
    
    string temp;
    for(int j = idx;j< str.length();j++)
    {
        temp += str[j];
        if(st.find(temp) != st.end())
        {
            if(helper(j+1,str,st))
                return dp[idx] = 1;
        }
    }
    return dp[idx] = 0;
}
    
public:
    int wordBreak(string A, vector<string> &B) {
        memset(dp,-1,sizeof dp);
 
        unordered_set<string> st;
        for(auto it: B)
        {
            st.insert(it);
        }
        return helper(0,A,st);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends