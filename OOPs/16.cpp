// virutal function
#include<iostream>
using namespace std;
class Parent{
public:
    virtual void hello(){
        cout<<"Hellloo"<<endl;
    }
};
class Child : public Parent{
    void hello(){
        cout<< "Helloo"<<endl;
    }
};
int main(){
    Child child;
    Parent *ptr;
    ptr = &child; // Run time binding
    ptr->hello();

    return 0;
}