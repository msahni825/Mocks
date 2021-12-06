#import <iostream>
#import <vector>

using namespace std;

bool isToeplitz(const vector<vector<int>>& matrix)
{
  int row=matrix.size();
  int col=matrix[0].size();
  for(int i=0;i<row-1;i++){
    for(int j=0;j<col-1;j++){
      if(matrix[i][j]!=matrix[i+1][j+1]){//left to right descending 
        return false;
      }
    }
  }
  return true;
}

int main() 
{
  vector<vector<int>> matrix={{1,2,3,4},{5,1,2,3},{6,5,1,2}};
  isToeplitz(matrix);
	return 0;
}
/*
[[8,8,8,8,8]
 [8,8,8,8,9]
 [8,8,8,8,8]
 [8,8,8,8,8]
 [8,8,8,8,8]]
 
00(1) 01(2) 02(3) 03(4)
10(5) 11(1) 12(2) 13(3)
20(6) 21(5) 22(1) 23(2)
size: 3*4
*/
