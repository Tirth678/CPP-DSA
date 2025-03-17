// bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[5] = {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}