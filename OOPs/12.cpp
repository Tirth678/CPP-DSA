// inhertiance
// multi-level inheritance
#include<iostream>
using namespace std;
class Animal{
public:
    string color;
    void eat(){

    }
    void breath(){
        cout<<"breathing..."<<endl;
    }

};
class Mamel : public Animal{
public:
    string bloodType;
    Mamel(){
        bloodType = "Warm";
    }
};
class Dog : public Mamel{
public:
    void tail(){
        cout<<"Tailing.."<<endl;
    }
};
int main(){
    Dog d1;
    d1.breath();
    d1.eat();

    return 0;
}