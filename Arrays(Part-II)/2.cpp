// maximum subarray sum
// 3 approches: brute force
// optimised brute force
// best approach(kadan's algorithm)




// brute force approach
#include<iostream>
#include<climits> // Include this header for INT_MIN
using namespace std;
void printsubarray(int arr[], int n){
    int maxSum;
    for(int start=0; start<n; start++){
        for(int end = start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<maxSum<<endl;
}
int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    printsubarray(arr,n);

    return 0;
}
// this approach has O(n^3);
// macros: memory me space nhi lete
// INT_MIN: infinitely small value
// INT_MAX: infitely max value
// bhale pura array -ve nums wala ho isse choti value nhi jayegi
// -ve values me maxSum = 0 nhi kr skte kyuki 0 hi max value ho jayegi


// optimised approach
// O(n^2)
#include<iostream>
using namespace std;
void maxsubarray(int arr[], int n){
    int maxSum = INT_MIN;
    for(int start = 0; start<n; start++){ // start = 2
        int currSum = 0;
        for(int end = start; end<n; end++){ // end = 2,3,4,5
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
}
int main(){

    return 0;
}

// kadan's algorithm 
// O(n)
#include<iostream>
using namespace std;
void maxarray2(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"Max sum: "<<maxSum<<endl;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    maxarray2(arr,n);

    return 0;
}