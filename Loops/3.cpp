// Question 3 : WAP to input a number and check whether the number is an Armstrong
// number or not.
#include<iostream>
using namespace std;
int main(){
    int num,r,sum=0,temp;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;
    while(num>0){
        r = num%10;
        sum = sum+(r*r*r);
        num = num/10;
    }
    if(temp == sum){
        cout<<"Yes it is an armstrong"<<endl;
    }
    else{
        cout<<"No it is not an armstrong"<<endl;
    }

    return 0;
}