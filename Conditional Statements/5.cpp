// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number.
// 3*3*3 + 7*7*7 + 1*1*1 = 371
#include<iostream>
using namespace std;
int main(){
    int sum=0, r, num,temp;
    cout<<"Enter a value to check if it's armstrong"<<endl;
    cin>>num;
    temp = num;
    while(num>0){
        r = num%10;
        sum = sum+(r*r*r);
        num = num/10;
    }
    if(sum == temp){
        cout<<"It is a armstrong number"<<endl;
    }
    else{
        cout<<"It is not a armstrong number"<<endl;
    }

    return 0;
}