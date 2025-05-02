#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){    
    for(int i=0; i<n; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}
int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};


    return 0;
}