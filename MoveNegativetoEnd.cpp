#include<iostream>
#include<vector>
using namespace std;

  vector<int> MoveNeg(vector<int> &num){

    vector<int>temp;

    for(int i: num){
      if(i>0){
       temp.push_back(i);
      }
    }

    for(int i: num){
      if(i <0){
        temp.push_back(i);
      }
    }

    return temp;
 }

int main(){

 vector<int> num={3,5,-2,6,-4};

 vector<int> reuslt=MoveNeg(num);

 for(int i:reuslt){
  cout<<i<<" ";
 }
}