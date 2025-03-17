// selection sort
#include<iostream>
using namespace std;
void print(int arr[], int n){
    n = sizeof(arr)/sizeof(int);
    for(int i=0; i<=n; i++){
        cout<<","<<arr[i];
    }
}
void selectionSort(int arr[], int n){
     for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
     }
     print(arr,n);
}
int main(){
    int arr[5] = {1,3,4,5,8};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,5);

    return 0;
}