	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	  int row1=0 , row2=n-1 , col1=0,col2=n-1 , count=0;
	  while(row1<n && row2>=0)
	  {
	      if(mat1[row1][col1]+mat2[row2][col2] ==x)
	      {
	          col1++;
	          col2--;
	          count++;
	      }
	      else if( x> mat1[row1][col1]+mat2[row2][col2])
	      {

	          col1++;
	      }
	      else if(x< mat1[row1][col1]+mat2[row2][col2])
	      {
	          col2--;
	      }
	      if(col1==n) {
	          row1++;
	          col1=0;
	      }
	      if(col2==-1){
	          col2=n-1;
	          row2--;
	      }
	  }
	  return count;
	}
//