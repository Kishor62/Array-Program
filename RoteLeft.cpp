#include<iostream>
#include<vector>
using namespace std;
class Solution{

private:

void reverse(vector<int>&arr,int start,int end){
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
public:
void roteLeft(vector<int>& arr, int k){

  int n=arr.size();
  if(n<=1) return;
 
   k=k%n;

    if(k==0) return;

    reverse(arr,0, k-1);
    reverse(arr, k,n-1);
    reverse(arr,0,n-1); 
}
};
int main(){
  Solution sol;

  vector<int> arr={1,2,3,4,5,6};

   int k=2;

   cout<<"Original arry:";

   for(int i:arr){
    cout<<i<<" ";
   }
   cout<<"\n";

   sol.roteLeft(arr,k);

   cout<<"After arry:";

   for(int j:arr){
    cout<<j<<" ";
   }
  
}