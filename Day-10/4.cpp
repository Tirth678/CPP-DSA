#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    int i;
    cout<<ptr<<endl;
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    // cout<<arr<<endl; // ek hexadecimal me value milegi
    cout<<*arr<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    // agar arr[0] = 1000 hoga to value 1000 hi print hogi
    // reason: pass by reference ho rha isiiye value change ho jayegi
    // size of this int pointer = 8 because size of pointer print hoga
    


    return 0;
}