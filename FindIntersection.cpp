#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> FindIntersection(vector<int>&arr1, vector<int>&arr2){

   unordered_set<int> s(arr1.begin(), arr1.end());
   vector<int>reuslt;

      for(int j: arr2){
        if(s.find(j)==s.end()){
          reuslt.push_back(j);
          s.erase(j);
        }
      }
  
  return reuslt;
}
int main(){
  vector<int>arr1={4,9,5,6};
  vector<int>arr2={3,4,8,9,7,9};

  vector<int> res=FindIntersection(arr1,arr2);

  for(int i:res){
    cout<<i<<" ";
  }
}