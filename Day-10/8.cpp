// reversing an arry without extra space
#include<iostream>
using namespace std;
int printarr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0, end = n-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printarr(arr, n);

    return 0;
}