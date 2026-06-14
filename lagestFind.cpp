#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){
  
  vector<int> arr={2,4,3,8,9,20,3};

  int max=INT_MAx;


  for(int i=0; i<arr.size(); i++){
    if(min>arr[i]){
      //max=arr[i]; //max find element
      min=arr[i]; // find min element
    }
  }
  cout<<min;
  
  
}

