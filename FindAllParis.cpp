//! Find all pairs whose sum is equal to a given number

#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:

  vector<int> FindAllPair(vector<int>&arr, int nub){

    vector<int>res;

    for(int i=0; i<arr.size(); i++){
      for(int j=i+1; j<arr.size(); j++){
        if(arr[i]+arr[j]==nub){
        res.push_back(i);
        res.push_back(j);
      }
    }
  }
  return res;
}
};

int main(){

  Solution sol;

  vector<int>arr={2,3,6,1,9};
   int nub=9;

  vector<int>res=sol.FindAllPair(arr,nub);

   for(int i: res){
    cout<<i<<" ";
   }
}