// operator overloading
#include<iostream>
using namespace std;
class Complex{
private:
    int img;
    int real;
public:
Complex(int r, int i){
    real = r;
    img = i;
}
    void ShowComplex(){
    cout<<real<<"+"<<img<<"i"<<endl;
}
    void operator + (Complex &c2){
        int resReal  = this->real + c2.real;
        int resComp = this->img + c2.img;
        Complex c3(resReal, resComp);
       cout<< "result = "<<endl;
       c3.ShowComplex();
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.ShowComplex();
    c2.ShowComplex();
    c1+c2;
    return 0;
}