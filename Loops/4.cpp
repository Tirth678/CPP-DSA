// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
// // (Assume N >= 2)
#include<iostream>
using namespace std;
int main(){
    bool isPrime;
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=2; i<(num-1); i++){
        if(num%1 == 0){
            isPrime = false;
            break;
        }
    }

    return 0;
}