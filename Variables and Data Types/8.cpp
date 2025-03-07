#include<iostream>
using namespace std;
int main(){

    float usd;
    int rupee;
    cout<<"enter the value to convert into USD"<<endl;
    cin>>rupee;
    usd = rupee*0.012;
    cout<<"the amount in USD = "<<usd<<endl;
    return 0;
}