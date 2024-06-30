// build a calculator using basic arithemetic operators 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"enter the mode of operation"<<endl;
    cin>>op;
    switch (op)
    {
    case '+': cout<<"a + b = "<<(a+b)<<endl;
        break;
    case '-': cout<<"a - b = "<<(a-b)<<endl;
        break;
    case '*': cout<<"a * b = "<<(a*b)<<endl;
        break;
    case '/': cout<<" a / b = "<<(a/b)<<endl;
    break;

    default: cout<<"invalid opearation"<<endl;
        break;
    }

    return 0;
}