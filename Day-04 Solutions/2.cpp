#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year you want to check"<<endl;
    cin>>year;
    if(year%4 == 0 && year%100 != 0 || year&400== 0){
        cout<<"the year is a leap one"<<endl;
    }
    else{
        cout<<"the year is not a leap year"<<endl;
    }

    return 0;
}