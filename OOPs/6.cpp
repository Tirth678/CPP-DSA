#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int *milege;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        milege = new int; // Dynamic Allocation
        *milege = 12;
 
    }
    // custom copy constructor
    Car(Car &orgObj){
        this->name = orgObj.name;
        this->color = orgObj.color;
        this->milege = orgObj.milege;
    }
};
int main(){
    Car c1("Maruti 800", "white");
    Car c2(c1); // default copy construcor call;
    return 0;
}