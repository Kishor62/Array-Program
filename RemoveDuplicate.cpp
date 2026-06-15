#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

   vector<int>arr={2,5,2,7,4,8,3};

    // Best Time complexity O(NlogN)
    sort(arr.begin(),arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

     for(int x: arr){
      cout<<x<<" ";
     }



    /**
    ! Fist method and Time complexity most O(N^3)

    int size=arr.size();

    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(arr[i]==arr[j]){
          for(int k=j; k< size-1; k++){
          arr[k]=arr[k+1];
          }
          size--;
          j--;
        }
      }
    }
    for(int i=0; i<size; i++){
      cout<<arr[i];
    }
  */
   
}