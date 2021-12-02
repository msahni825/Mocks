/*Array of array products*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=4;
	vector<int> input;
	input.push_back(-1);
	input.push_back(1);
	input.push_back(0);
	input.push_back(-3);
	vector<int> result(n,1);
	
	for(int i=1;i<n;i++){
		result[i]=result[i-1]*input[i-1];
	}
	int product=1;
	for(int j=n-2;j>=0;j--){
		product*=input[j+1];
		result[j]*=product;
	}
	for(int i=0;i<n;i++){
		cout<<result[i]<<" ";
	}
	return 0;
}
