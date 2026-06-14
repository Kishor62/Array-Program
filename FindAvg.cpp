#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr={3,5,2,3};
  
  float avg,sum=0;

   for(int i=0; i<arr.size(); i++){
    sum+=arr[i];
   }

   avg=sum/arr.size();

   cout<<"Find Avg :"<<avg;
}