// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
// // (Assume N >= 2)
#include<iostream>
using namespace std;
int fibonacci(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main(){
    int n;
    cout<<"Enter num"<<endl;
    cin>>n;
    cout<<"Fibonacci: "<<fibonacci(n)<<endl;


    return 0;
}