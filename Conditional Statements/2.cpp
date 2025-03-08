// Question 2 : Write a C++ program that takes a year from the user and print whether
// that year is a leap year or not.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if(year%4 == 0 || year%100 == 0 && year%400 == 0){
        cout<<"The year is a leap year"<<endl;
    }
    else{
        cout<<"The year is not a leap year"<<endl;
    }

    return 0;
}