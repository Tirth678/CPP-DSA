// inhertiance
#include<iostream>
using namespace std;
class Animal{
public:
    string color;
    void eat(){

    }
    void sleep(){
        cout<<"Sleeping..."<<endl;
    }

};
class Fish : protected Animal{ // not possible
    public:
        int fins;
        void swim(){
            cout<<"Swimmin.."<<endl;
        }
    };
int main(){
    Fish f1;
    f1.fins = 3;
    cout << f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.sleep();

    return 0;
}