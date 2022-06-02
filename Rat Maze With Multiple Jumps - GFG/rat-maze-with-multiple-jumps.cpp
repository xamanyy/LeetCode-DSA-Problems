// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool isValid(int x,int y,vector<vector<int>>&matrix)
{
    int n = matrix.size();
    
    if(x >= 0 && y>= 0 && x<n && y < n && matrix[x][y] != 0)
        return true;
        
    return false;
}

bool helper(vector<vector<int>> &ans,int x,int y,vector<vector<int>> &matrix,int n)
{
    if(x == n-1 && y == n-1)
    {
        ans[x][y] = 1;
        return true;
    }
    
    if(isValid(x,y,matrix))
    {
        ans[x][y] = 1;
        for(int i = 1;i<=matrix[x][y] and i < n;i++)
        {
            if(helper(ans,x,y+i,matrix,n))
                return true;
                
            if(helper(ans,x+i,y,matrix,n))
                return true;
        }
        
        ans[x][y] = 0;
        return false;
    }
    return false;
}

	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   
	   int n = matrix.size();
	   int m = matrix[0].size();
	   
	   vector<vector<int>> ans(n,vector<int>(m,0));
	   vector<vector<int>> temp;
	   
	   temp.push_back({-1});
	   
	   helper(ans,0,0,matrix,n);
	   
	   return ans[n-1][n-1] == 0 ? temp : ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends