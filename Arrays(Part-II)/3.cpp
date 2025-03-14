// buy and sell stocka
#include<iostream>
using namespace std;
void maxStock(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
}
int main(){

    return 0;
}