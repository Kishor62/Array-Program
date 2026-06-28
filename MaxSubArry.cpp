#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
public:
 int MaxSubArry(vector<int>&arr){

  int curSum=0;
  int maxSum=INT_MIN;

  for(int val: arr){
    curSum+=val;
    maxSum=max(curSum,maxSum);

    if(curSum<0){
      curSum=0;
    }
  }
  return maxSum;
}
};

int main(){
  Solution sol;

  vector<int> arr={2,3,-8,7,-1,2,3};

  int res=sol.MaxSubArry(arr);

  cout<<"MaxSubArry:"<<res;
}