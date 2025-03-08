// Question 1 : Write a C++ program to get a number from the user and print whether
// it's positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value"<<endl;
    cin>>n;
    if(n>0){
        cout<<"Value is positive"<<endl;
    }
    else if(n == 0){
        cout<<"Value is 0"<<endl;
    }
    else{
        cout<<"Value is negative"<<endl;
    }
    return 0;
}