#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;
    cout<<*ptr<<endl; // value update hokr 25 ho gayi
    int arr[5];
    cout<<arr<<" ";
    arr = &y; // ye possible nhi hai ab


    return 0;
}