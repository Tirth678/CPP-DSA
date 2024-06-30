#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of your choice"<<endl;
    cin>>num;
    if(num>0){
        cout<<"the value is positive"<<endl;
    }
    else if(num == 0){
        cout<<"the value is 0"<<endl;
    }
    else if(num<0){
        cout<<"the value is negative"<<endl;
    }
    else{
        cout<<"enter a valid number"<<endl;
    }
    return 0;
}