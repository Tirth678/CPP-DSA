#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1,2,3,4};
    int n;
    cout<<"enter length of the array"<<endl;
    cin>>n;
    int arr[n];
    // int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}