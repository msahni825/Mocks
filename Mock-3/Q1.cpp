#include <iostream>
#include <vector>

using namespace std;

int calcDroneMinEnergy( const vector<vector<int>>& route ) 
{
  int r=route.size();
  int result=INT_MIN;
  int energy=0;    
 for(int i=0;i<r-1;i++){
     int z1=route[i][2]; 
     int z2=route[i+1][2];
     int diff=(z1-z2); //diff=10 
     if(diff>0){
       energy+=diff;   //energy=7
     }
    else if(diff<0){  
      if(energy>=abs(diff)) //10>6 //
      energy-=abs(diff);
    //energy=10-(6)=4
   else if(energy<abs(diff)){ //4<9
     result=max(result,abs(energy-(abs(diff))));// max(0,4-(-9))=5
     energy=0;// energy=0
   }
   }
 } 
  return result==INT_MIN?0:result;
}
  /*
  0  2   6
  10 10 20
  */ 
int main() {
  return 0;
}
