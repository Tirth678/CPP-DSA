// (EASY)
// Question 1 : Given an integer array nums, return true if any value appears at least
// twice in the array, and return false if every element is distinct. [link]
#include<iostream>
using namespace std;
bool duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
        if(arr[i] == arr[j]){
            return true;
        }
       }
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,4};
    int n = 4;
    cout<<" "<<duplicate(arr,n)<<endl;

    return 0;
}