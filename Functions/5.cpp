// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
#include<iostream>
using namespace std;
int doSomething(char n){
    return n+1;
}
int main(){
    char a = 'A';
    cout<<"After that!: "<<doSomething(a)<<endl;

    return 0;
}