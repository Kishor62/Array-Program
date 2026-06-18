#include<iostream>
#include<vector>
using namespace std;

 void MoveZero(vector<int>&nums){
  
   int noZero=0;

   for(int i=0; i<nums.size(); i++){
     if(nums[i]!=0){
      nums[noZero]=nums[i];
      noZero++;
     }
   } 

     while(noZero<  nums.size()){
        nums[noZero]=0;
        noZero++;
     }
}

int main(){

  vector<int>nums={0,2,0,3,5};
  MoveZero(nums);

  for(int i: nums){
    cout<<i;
  }
}