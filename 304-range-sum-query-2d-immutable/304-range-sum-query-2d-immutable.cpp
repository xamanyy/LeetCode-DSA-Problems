class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i = 0;i<n;i++)
        {   
            for(int j = 1;j<m;j++)
            {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        
        for(int i = 1;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                matrix[i][j]  +=  matrix[i-1][j];
            }
        }
        mat = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = mat[row2][col2];
        
        int temp = (col1!= 0 ? mat[row2][col1-1]:0) + (row1!=0? mat[row1-1][col2]: 0) - ((row1 != 0 && col1 != 0) ? mat[row1-1][col1-1]:0); 
        
        return (sum - temp);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */