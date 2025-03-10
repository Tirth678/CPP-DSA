// Question 4 : Write a function that prints the largest of 3 numbers.
#include<iostream>
using namespace std;
int largest(int x, int y, int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 values"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Largest among the three: "<<largest(num1,num2,num3)<<endl;

    return 0;
}