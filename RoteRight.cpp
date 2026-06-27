#include<iostream>
#include<vector>
using namespace std;

class Solution{

  private:

   void reverse(vector<int>&arr, int start, int end){
     while(start<end){
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
     }
   }

   public:

   void RoteRight(vector<int>&arr, int k){

     int n=arr.size();
      if(n<=1) return;
      k=k%n;
      if(k==0) return;

    reverse(arr,0,n-k-1);
    reverse(arr, n-k,n-1);
    reverse(arr,0,n-1); 
   }
};

int main(){
  Solution sol;
  vector<int> arr={1,2,3,4,5,6};

   int k=2;

   sol.RoteRight(arr,k);

   cout<<"Rote Right: ";
   
   for(int j: arr){
    cout<<j<<" ";
   }
  
}