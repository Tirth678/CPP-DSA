// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T) Output :
// (P*R*T) / 100
#include<iostream>
using namespace std;
int main(){
    int principle,time,rate;
    cout<<"Enter amount of principle"<<endl;
    cin>>principle;
    cout<<"Enter amount of time"<<endl;
    cin>>time;
    cout<<"Enter amount of rate"<<endl;
    cin>>rate;
    cout<<"Your simple interest: "<<(float)(principle*rate*time)/100<<endl;

    return 0;
}