#include<iostream>
using namespace std;
int main(){
    int principle;
    int rate;
    int time;
    int simpleIntrest;
    int result;
    cout<<"enter principle amount"<<endl;
    cin>>principle;
    cout<<"enter the rate of amount"<<endl;
    cin>>rate;
    cout<<"enter time"<<endl;
    cin>>time;
    simpleIntrest = (rate*time*principle)/100;
    cout<<"your simple intrest = "<<simpleIntrest<<endl;

    return 0;
}