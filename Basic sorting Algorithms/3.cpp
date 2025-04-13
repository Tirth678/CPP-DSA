// find largest element
#include<iostream>
using namespace std;
void largest(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){

    return 0;
}