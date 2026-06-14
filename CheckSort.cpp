#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int>arr={4,6,3,9,20};
   int c=0;

   for(int i=0;i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
      if(arr[i]>arr[j]){
        c=1;
      }
    }
   }
   if(c!=1){
    cout<<"Yes";
   }
   else{
    cout<<"Not";
   }
}