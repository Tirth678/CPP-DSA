// income tax calculator
#include<iostream>
using namespace std;
int main(){
    int income;
    cout<<"enter your income"<<endl;
    cin>>income;
    if(income<500000){
        cout<<"tax applied 0%";
    }

    else if(income>50000 && income<1000000){
        cout<<"tax applied 20% = "<<income*0.2<<endl;
        
    }
    else if(income>1000000){
        cout<<"tax applied 30% = "<<income*0.3<<endl;
        return 0.30*income;
    }
    else{
        cout<<" ";
    }


    return 0;
}
