#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

   vector<int>arr={3,4,5,6,7,9};

   int even=0,odd=0;

    for(int i=0; i<arr.size(); i++){
      if(arr[i]%2==0){
        even++;
      }
      else{
        odd++;
        
      }
    }
    cout<<"Total Even Element:"<<even<<endl;
    cout<<"Total Odd Element:"<<odd<<endl;
   
}