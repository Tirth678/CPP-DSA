// print subarrays of an array 1,12,123,1234,12345
// subsequence of an array 1,3,5
// time complexity: O(n**3)
#include<iostream>
using namespace std;
void printsub(int *arr, int n);
int main(){
    // n size ke array ke liye kitne subarrays hote hai? == n*(n+1)/2
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    printsub(arr, n);
    return 0;
}
void printsub(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end = start; end<n; end++){
            //cout<<"("<<start<<","<<end<<")  ";
            for(int i=start; i<n; i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}