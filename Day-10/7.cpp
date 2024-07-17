// reversing a array with extra elements
#include<iostream>
using namespace std;
int printarr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
}
int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    
    int copyarr[n];
    for(int i=0; i<n; i++){
        int j = n-i-1;
        copyarr[i] = arr[j];
    }
    for(int i=0; i<n; i++){
        arr[i] = copyarr[i];
    }
    printarr(arr, n);

    return 0;
}