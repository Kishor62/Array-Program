#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int>arr={3,4,5,2};
   int sum=0;
   for(int i=0; i<arr.size(); i++){
    sum+=arr[i];
   }
   cout<<"Totalsum of element:"<<sum;
}