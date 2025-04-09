// destructor
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
    ~Car(){
        cout<<"Dellocating dynamically alloted memory"<<endl;
        if(milege!= NULL){
            delete milege;
            milege = NULL;
        }
    }
};
int main(){
    Car c1("Maruti 800", "white");
    Car c2(c1); // default copy construcor call;
    cout<<c2.name<<endl;
    cout<<*c2.milege<<endl;
    *c2.milege = 10; // ham c2 ki value change kr rhe 
    cout<<*c1.milege<<endl; // ab ye dono ek new value pr point krenge that is 10;
    return 0;
}