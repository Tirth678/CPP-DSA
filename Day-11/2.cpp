// maximum subarray sum
// brut force approach
// O(n**3)
#include<iostream>
using namespace std;
void sumaarrsum(int *arr, int n){
    int maxsum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currentsum = 0;
            for(int i=start; i<=end; i++){
                currentsum += arr[i];
            }
            cout<<currentsum<< ",";
            maxsum = max(maxsum, currentsum); // max function (a,b) max value return kr dega c++ ka function hai
        }
        cout<<endl;
    }
    cout<<"max = "<<maxsum<<endl;
}
int main(){
    // brute force approach
    int arr[6] = {2,-3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    sumaarrsum(arr, n);


    return 0;
}