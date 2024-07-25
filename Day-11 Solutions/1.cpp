#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,2,4,5};
    int n = sizeof(arr)/sizeof(int);
    for(int i; i<n; i++){
        if(arr[i] == arr[i-1]){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }

    return 0;
}