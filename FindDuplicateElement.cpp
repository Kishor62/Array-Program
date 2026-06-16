#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){

  vector<int>arr={2,4,5,3,2,8,4};
  unordered_set<int> seen;
  unordered_set<int>Dupl;

for(int i=0; i<arr.size(); i++){
  if(seen.find(arr[i])!=seen.end()){
    Dupl.insert(arr[i]);
  }
  else{
    seen.insert(arr[i]);
  }
} 

  cout<<"Original element:"<<endl;
  for(int i:arr){
    cout<<i<<" ";
  }

  cout<<"\nDuplicate element:"<<endl;
  for(int j:Dupl){
    cout<<j<<" ";
  }
}