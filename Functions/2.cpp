// Question 2 : Write a function to calculate the sum of digits of a number.
#include<iostream>
using namespace std;
int add(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return x+add(x-1);
    }
}
int main(){
    int num;
    cout<<"Enter a value"<<endl;
    cin>>num;
    cout<<"Addtion till given num: "<<add(num)<<endl;

    return 0;
}