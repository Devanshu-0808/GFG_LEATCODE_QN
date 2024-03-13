vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int row=0 , col=0 , n=mat.size();
        vector<int>ans;
        bool up=true;
        while(ans.size()!=n*n)
        {
            if(up)
            {
                while(row>0 && col<n-1)
                {
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                ans.push_back(mat[row][col]);
                if(col==n-1)
                {
                    row++;
                }
                else
                {
                    col++;
                }
            }
            else
            {
                   while(col>0 && row<n-1)
                {
                    ans.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                ans.push_back(mat[row][col]);
                 if(row==n-1)
                {
                    col++;
                }
                else
                {
                    row++;
                }
                
            }
            up=!up;
            
        }
        return ans;
        
    }
