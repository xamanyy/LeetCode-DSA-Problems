class Solution {
public:
    
    bool isSafe(int row,int col,vector<string> &board,int n)
    {
        int tRow = row;
        int tCol = col;
        
        //top left side
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        row = tRow;
        col = tCol;
        
        //left Side
        
        while(col >= 0)
        {
             if(board[row][col] == 'Q') return false;
                col--;
        }
        
        //bottom left corner.
        row = tRow;
        col = tCol;
        
        while(row <n && col >= 0)
        {
             if(board[row][col] == 'Q') return false;
                row++;
            col--;
        }
        
        return true;
    }
    
    void helper(int col,vector<string> &board,vector<vector<string>> &ans,int n)
    {
        //base case
        if(col == n)
        {
            ans.push_back(board);
            // return true;
        }
        
        for(int row = 0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col] = 'Q';
                helper(col+1,board,ans,n);
                board[row][col] = '.';
            }
            // return false;
        }
        
        // return false;
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n);
        vector<vector<string>> ans;
        
        string chess(n,'.');
        
        for(int i = 0;i<n;i++)
        {
            board[i] = chess;
        }
        
        helper(0,board,ans,n);
        return ans;
    }
};