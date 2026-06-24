#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> MergeTwoArr(vector<int>&arr1, vector<int>&arr2){

    vector<int>reuslt(arr1.size()+ arr2.size());

    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),reuslt.begin());

    sort(reuslt.begin(), reuslt.end());
    
    return reuslt;
}
int main(){
  vector<int>arr1={4,9,5,6};
  vector<int>arr2={3,4,8,9,7,9};

  vector<int> res=MergeTwoArr(arr1,arr2);

  for(int i:res){
    cout<<i<<" ";
  }
}