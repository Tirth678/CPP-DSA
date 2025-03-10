// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.
#include<iostream>
using namespace std;
int quadratic(double x, double y){
    double result;
    result = (x*x)+(y*y)+2*(x)*(y);
    return result;
}
int main(){
    int a,b;
    cout<<"Enter 2 values to solve the following"<<endl;
    cin>>a>>b;
    cout<<"Answer: "<<quadratic(a,b)<<endl;
    return 0;
}