#include <iostream>
#include <vector>

using namespace std;

  int row_coordinates[4]={1,0,-1,0};
  int col_coordinates[4]={0,-1,0,1};
 
bool isValid(vector<vector<int>>& binaryMatrix, int i, int j){
  if(i<0 || j<0 || i>binaryMatrix.size() || j>binaryMatrix[0].size()){
    return false;
  }
  return true;
}
void dfs(vector<vector<int>>& binaryMatrix, int row, int col){
  for(int i=0;i<4;i++){// row=0, col=1
    int x=row_coordinates[i]+row;//1+0=1
    int y=col_coordinates[i]+col;//0+1=1
    if(!isValid(binaryMatrix,x,y)){//i=1,j=1
       continue;
    }
    else if(isValid(binaryMatrix,x,y) && binaryMatrix[x][y]=='1'){
      dfs(binaryMatrix,x,y);
    }
  }
}
int getNumberOfIslands(vector<vector<int>>& binaryMatrix) 
{
  // your code goes here
  int row=binaryMatrix.size();
  int col=binaryMatrix[0].size();
  int isl_count=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(binaryMatrix[i][j]=='1'){
         isl_count++;//i=0, j=1, count=1
         dfs(binaryMatrix,i,j);// mat,0,1
      }
    }
  }
  return isl_count;
}

int main() {
  return 0;
}
