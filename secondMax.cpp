#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

   int secMax= INT_MIN;
   int max= INT_MAX;
  
  vector<int>arr={4,5,7,3,9,10};
 
   for(int i=0; i<arr.size(); i++){
     if(arr[i] > max){
        secMax=max;
        max=arr[i];
     }
    else if(arr[i]<secMax && arr[i]!=max){
      secMax=arr[i];
     }
   }
   cout<<max;
  // cout<<secMax;

  }