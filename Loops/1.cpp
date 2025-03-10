// Question 1 : WAP to find the Factorial of a number entered by the user.

#include<iostream>
using namespace std;
int factorial(int x){
    return x*factorial(x-1);
}
int main(){
    int num;
    cout<<"Enter a value"<<endl;
    cin>>num;
    cout<<"Factorial: "<<factorial(num)<<endl;
    
    return 0;
}