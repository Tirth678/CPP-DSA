// bubble sort
// optimised
#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<endl;
    }
}
void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                bool isSwap = true;
            }
        }
        if(!isSwap == false){
            // array is sorted
            return;
        }
    }
    print(arr, n);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    bubbleSort(arr, 5);
    // this is for asscending order
    // same can go for desscending order
    return 0;
}
