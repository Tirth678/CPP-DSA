#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,65};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }

    }
    cout<<"largest value = "<<max<<endl;

    return 0;
}
