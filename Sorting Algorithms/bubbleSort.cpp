// bubble sort
#include<iostream>
using namespace std;
int bs(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){ // 0(n^2)
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return 1;
}
int main(){

    return 0;
}