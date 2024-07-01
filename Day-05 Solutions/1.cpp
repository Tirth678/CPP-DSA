#include<iostream>
using namespace std;
int factorial(int x);
int main(){
    int num;
    cout<<"enter the value"<<endl;
    cin>>num;
    cout<<"factorial of num = "<<factorial(num)<<endl;

    return 0;
}
int factorial(int x){
    if (x == 0 || x == 1){
        return 1;
    }
    else{
        int result;
        result = x*factorial(x-1);
        return result;
    }
}