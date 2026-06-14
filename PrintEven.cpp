#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int>arr={3,5,7,2,8,6,4};
  for(int i=0; i<arr.size(); i++){
    if(arr[i]%2==0){
      cout<<arr[i]<<" ";
    }
  }
}