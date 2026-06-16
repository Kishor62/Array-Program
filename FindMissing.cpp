#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int>arr={1,2,4,5};
   
   int n=arr.size()+1;
   int sum=0;
   int crrent_sum=n*(n+1)/2;

   for(int i: arr){
    sum+=i;
   }

   int missing=crrent_sum-sum;
   cout<<"Missing Number is:"<<missing;
}