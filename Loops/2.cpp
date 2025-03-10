// Question 2 : WAP to print the multiplication table of a number, entered by the user.
#include<iostream>
using namespace std;
int factorial(int x){
    return x*factorial(x-1);
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=0; i<=10; i++){
        cout<<num<<"x"<<i<<"="<<(num*i)<<endl;
    }
    
    return 0;
}