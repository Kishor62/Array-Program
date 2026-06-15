#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  vector<int>arr={1,2,4,3,5,2,1};
  
  int target=1;
  // find the frequency

  int count=(arr.begin(), arr.end() ,target);

  cout<<count;
}