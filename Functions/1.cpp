// Question 1 : Write a function to check if a number is a palindrome in C++.
#include<iostream>
using namespace std;
int main(){
    int temp,sum=0,r,num;
    cout<<"Enter any value"<<endl;
    cin>>num;
    temp = num;
    while(num>0){
        r = num%10;
        // sum = sum+(r*r*r);
        sum = (sum*10)+r;
        num = num/10;
    }
    if(temp == sum){
        cout<<"This num is palidrome"<<endl;
    }
    else{
        cout<<"This num is not palidrome"<<endl;
    }
    return 0;
}