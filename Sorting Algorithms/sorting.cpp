#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5);
    // for(int i=0; i<5; i++){
    //     cin>>v[i];

    // }
    // sort(v.begin(), v.end()); // in-build sortinf function in c++ T.C= O(nlogn)
    // sort(v.begin(), v.end()); // reverse sorting 
    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }
    int n = 6;
    int arr[6] = {5,4,6,3,2,1};
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort: O(n*n)
    for(int i=0; i<n-1; i++){ // n-1 passes
            // traverse
            for(int j=0; j<n-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    // use direct swap function
                    // swap(arr[j], arr[j+1]);
                }
            }
    }
    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}