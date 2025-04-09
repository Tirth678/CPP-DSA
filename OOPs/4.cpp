#include<iostream>
using namespace std;
class Car{
    string name;
    string color;

public:
// this is constructor same name as class
// non-parameterised
    Car(){

    }
// parameterised
    Car(string name, string color){
        this->name = name;
        this->color = color;
    }
    void start(){
        cout<< "car has started"<<endl; 
    }
    void stop(){
        cout << "car has stopped"<<endl;
    }
};
int main(){
    Car c1;
    Car c2("Maruit", "LOL");

    return 0;
}

