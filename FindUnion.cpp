#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> FindUnion(vector<int>& arry1,vector<int>&arry2){

  
   sort(arry1.begin(), arry1.end());
   sort(arry2.begin(), arry2.end());

   vector<int>reuslt;

    set_union
    (
      arry1.begin(), arry1.end(),
      arry2.begin(),arry2.end(),
      back_inserter(reuslt)
    );
 
  
    return reuslt;
}

int main(){
  vector<int>arry1={1,2,3,4};
  vector<int>arry2={4,2,5,3};

  vector<int>res=FindUnion(arry1,arry2);

  for(int i:res){
    cout<<i<<" ";
  }
}