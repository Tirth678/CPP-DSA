// find largest element in an array
#include<iostream>
using namespace std;
int main(){
  int arr[10] = {1,2,3,4,5};
  int max = arr[0];
  for(int i=0; i<5; i++){
      if(arr[i]>max){
        max = arr[i];
        return max;
      }
  }

  return 0;
}