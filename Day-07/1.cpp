// adding 2 numbers
#include<iostream>
using namespace std;
int sum(int x, int y);
int main(){
    int a,b;
    cout<<"enter the numbers to get the sum"<<endl;
    cin>> a;
    cin>>b;
    cout<<"sum = "<<sum(a,b)<<endl;


    return 0;
}
int sum(int x, int y){
    int result;
    result = x+y;
    return result;
}