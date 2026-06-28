#include<iostream>
#include<vector>

using namespace std;

class Solution{
  public:

  void FindtripletsPair(vector<int>&arr, int target){

    int n=arr.size();

     for(int i=0;i<n-2; i++){
      for(int j=i+1; j<n-1; j++){
        for(int k=j+1; k<n; k++){
          if(arr[i]+arr[j]+arr[k]==target){
           // result.push_back({arr[i],arr[j],arr[k]});
           cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
          }
        }
      }
     }
     
  }
};

int main(){
  Solution s;

  vector<int>arr={2,4,2,9,0,3};
  int target=15;

  s.FindtripletsPair(arr,target);
  
}