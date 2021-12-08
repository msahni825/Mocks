#include <iostream>
#include <vector>

using namespace std;

  int row_coordinates[4]={1,0,-1,0};
  int col_coordinates[4]={0,-1,0,1};
 
bool isValid(vector<vector<int>>& grid, int i, int j){
  if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
    return false;
  }
  return true;
}

void dfs(vector<vector<int>>& grid, int row, int col){
  grid[row][col]=0;
  for(int k=0;k<4;k++){// row=0, col=1
    int x=row_coordinates[k]+row;//1+0=1
    int y=col_coordinates[k]+col;//0+1=1
    if(!isValid(grid,x,y)){//i=1,j=1
       continue;
    }
    if(grid[x][y]==1){
      dfs(grid,x,y);
    }
  }
}
int getNumberOfIslands(const vector<vector<int>>& binaryMatrix) 
{
  vector<vector<int>> grid = binaryMatrix;
  int row=grid.size();
  int col=grid[0].size();
  int isl_count=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(grid[i][j]==1){
         isl_count++;//i=0, j=1, count=1
         dfs(grid,i,j);// mat,0,1
      }
    }
  }
  return isl_count;
}

int main() {
  return 0;
}
